#ifndef HANDLER_H
#define HANDLER_H

#include "pch.h"
#include <set>
#include <algorithm>
#include "Image.h"
#include <vector>

namespace ImageRecognition {
	
	struct stats_item
	{
		u32 true_positive = 0;
		u32 false_positive = 0;
		u32 true_negative = 0;
		u32 false_negative = 0;
		u32 total_unknown_objects = 0;
	};

	class Handler 
	{
		std::vector<ImageObject*> allObjects;

		std::vector<Image*> allImages;

		std::vector<Image*> selectedImages;
		u32 selectedObject;
		stats_item * stats = nullptr;

	public:

		~Handler ( )
		{
			for (auto & im : allImages) {
				delete im;
				im = nullptr;
			}
			allImages.clear ( );
			for (auto & o : allObjects) {
				delete o;
				o = nullptr;
			}

			allObjects.clear ( );
		}

		std::vector<Image*> const & getImages ( ) const { return allImages; }
		std::vector<ImageObject*> const & getObjects ( ) const { return allObjects; }
		std::vector<Image*> const & getSelectedImages ( ) const {
			return selectedImages; 
		}
		ImageObject const* getSelectedObject ( ) const { 
			if ( selectedObject < 0 || selectedObject > allObjects.size() ) 
				return nullptr; 
			return allObjects[selectedObject];
		}

		Handler ( ) { init ( ); selectedImages = allImages; }

		void init ( )
		{

			ImageObject * car	= new ImageObject ( "car", RecognizingPolicy::unknown, 0.8f );
			
			ImageObject * unrecognizableHuman = new ImageObject ( "human", RecognizingPolicy::unknown, 0.0f );
			ImageObject * hand = new ImageObject ( "hand", RecognizingPolicy::unknown, 1.0f );
			ImageObject * leg = new ImageObject ( "leg", RecognizingPolicy::unknown, 1.0f );

			ImageObject * house = new ImageObject ( "house", RecognizingPolicy::parts, 0.5f );	
			ImageObject * window = new ImageObject ( "window", RecognizingPolicy::unknown, 0.5f );
			ImageObject * door	= new ImageObject ( "door", RecognizingPolicy::unknown, 0.5f );
			
			ImageObject * unrecognizableCat = new ImageObject ( "cat", RecognizingPolicy::similar, 0.0 );
			ImageObject * dog = new ImageObject ( "dog", RecognizingPolicy::similar, 1.0 );

			allObjects.push_back ( car );
			allObjects.push_back ( unrecognizableHuman );
			allObjects.push_back ( house );
			allObjects.push_back ( window );
			allObjects.push_back ( door );
			allObjects.push_back ( hand );
			allObjects.push_back ( leg );
			allObjects.push_back ( unrecognizableCat );
			allObjects.push_back ( dog );
/*
			car->setSimilarObjects		( std::vector<ImageObject*> ( ) );
			unrecognizableHuman->setSimilarObjects	( std::vector<ImageObject*> ( ) );
			house->setSimilarObjects	( std::vector<ImageObject*> ( ) );
			window->setSimilarObjects	( std::vector<ImageObject*> ( ) );
			door->setSimilarObjects		( std::vector<ImageObject*> ( ) );
*/
			dog->setSimilarObjects ( std::vector<ImageObject*> ( { unrecognizableCat } ) );
			unrecognizableCat->setSimilarObjects ( std::vector<ImageObject*> ( {dog} ) );


			car->setParts		( std::vector<ImageObject*> ( ) );
			unrecognizableHuman->setParts		( std::vector<ImageObject*> ( {hand, leg} ) );
			house->setParts		( std::vector<ImageObject*> ( {window, door} ) );
			window->setParts	( std::vector<ImageObject*> ( ) );
			door->setParts		( std::vector<ImageObject*> ( ) );

			Image * image		= new Image ( 0, Size2d ( 100, 100 ) );

			// random image
			image->addObject	( new ImageObjectInstance ( Size2d ( 0, 0 ), Size2d ( 20, 20 ), car ) );
			image->addObject	( new ImageObjectInstance ( Size2d ( 10, 10 ), Size2d ( 20, 20 ), unrecognizableHuman ) );
			image->addObject	( new ImageObjectInstance ( Size2d ( 0, 0 ), Size2d ( 20, 20 ), house ) );
			image->addObject	( new ImageObjectInstance ( Size2d ( 10, 10 ), Size2d ( 20, 20 ), window ) );

			allImages.push_back	( image );

			// test case: parts
			image				= new Image	( 1, Size2d ( 100, 100 ) );
			image->addObject	( new ImageObjectInstance ( Size2d ( 0, 0 ), Size2d ( 20, 20 ), house ) );
			image->addObject	( new ImageObjectInstance ( Size2d ( 1, 1 ), Size2d ( 20, 20 ), window ) );
			image->addObject	( new ImageObjectInstance ( Size2d ( 1, 1 ), Size2d ( 20, 20 ), window ) );
			image->addObject	( new ImageObjectInstance ( Size2d ( 0, 0 ), Size2d ( 20, 20 ), hand ) );
			image->addObject	( new ImageObjectInstance ( Size2d ( 1, 1 ), Size2d ( 20, 20 ), leg ) );
			image->addObject	( new ImageObjectInstance ( Size2d ( 1, 1 ), Size2d ( 20, 20 ), unrecognizableHuman ) );
			allImages.push_back ( image );

			// test case: similar
			image			= new Image ( 2, Size2d ( 40, 50 ) );
			image->addObject ( new ImageObjectInstance ( Size2d ( 0, 0 ), Size2d ( 20, 20 ), unrecognizableCat ) );
			image->addObject ( new ImageObjectInstance ( Size2d ( 20, 20 ), Size2d ( 20, 20 ), dog ) );
			allImages.push_back ( image );

			// test case: generalize
			image			= new Image ( 3, Size2d ( 40, 50 ) );
			image->addObject ( new ImageObjectInstance ( Size2d ( 0, 0 ), Size2d ( 20, 20 ), unrecognizableCat ) );
			image->addObject ( new ImageObjectInstance ( Size2d ( 20, 20 ), Size2d ( 20, 20 ), dog ) );
			allImages.push_back ( image );

		}

		bool run( )
		{
			if (selectedImages.empty ( ))
				return false;
			//auto const & images = selectedImages.empty ( ) ? selectedImages : allImages;
			for (auto im : selectedImages)
				im->recognizeObjects ( );
			auto const & selectedObject = getSelectedObject ( );
//			if (selectedObject)
//				stats = new stats_item(calc_stats ( selectedObject, allImages ));
			return true;
		}

		stats_item calcStatsItem ( ImageObject * o )
		{
			return stats_item ( calc_stats ( o, allImages ) );
		}

		stats_item const * getStatsItem ( ) const
		{
			return stats;
		}


		stats_item calc_stats ( ImageObject const * object, std::vector<Image*> const & images )
		{
			stats_item result;
			for (auto const & image : images) {
				
				auto realObjects = image->getObjects ( );
				auto uniqueRealObjectTypes = getUniqueObjectTypes		( realObjects );

				auto recognizedObjects = image->getLastRecognizedObjects ( );
				auto uniqueRecognizedObjectTypes = getUniqueObjectTypes ( recognizedObjects );
				
				bool foundReal = uniqueRealObjectTypes.find ( object ) != uniqueRealObjectTypes.end();
				bool foundRecognized = uniqueRecognizedObjectTypes.find ( object ) != uniqueRecognizedObjectTypes.end();
				
				if (foundReal && foundRecognized)
					result.true_positive++;
				else if (foundReal && !foundRecognized)
					result.false_negative++;
				else if (!foundReal && foundRecognized)
					result.false_positive++;
				else result.true_negative++;

				for (auto const & o : recognizedObjects) {
					if ( o->isUnknown() )
						result.total_unknown_objects++;
				}
			}
			return result;
		}

		std::set<ImageObject const*> getUniqueObjectTypes ( std::vector<ImageObjectInstance*> const & objects )
		{
			std::set<ImageObject const*> result;
			for (auto const & o : objects) {
				result.insert ( o->getObject() );
			}
			return result;
		}
			
		bool filter ( System::DateTime from, System::DateTime to )
		{
			if (from > to)
				return false;
			selectedImages.clear ( );
			for (auto const & image : allImages) {
				long long time = image->getCreated ( ).time_since_epoch ( ).count ( );
				if (time < from.ToFileTime ( ) && time > to.ToFileTime())
					continue;
				selectedImages.push_back ( image );
			}
			return true;
		}

		void setSelectedObject ( u32 index )
		{
			selectedObject = index;
		}

		Image const * findImageById ( u32 id )
		{
			auto found = std::find_if ( 
				allImages.begin ( ), 
				allImages.end ( ), 
				[&id]( Image const * im ) { return im->getId() == id; } 
			);
			return *found;
		}

	};
}

#endif