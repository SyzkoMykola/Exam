#ifndef IMAGE_OBJECT_INSTANCE_H
#define IMAGE_OBJECT_INSTANCE_H

#include "pch.h"
#include "ImageObject.h"
#include <vector>

namespace ImageRecognition
{

	class UnknownImageObjectInstance;

	class ImageObjectInstance
	{
		ImageObject * object;
		Size2d pos;
		Size2d rect;

	public:
		static ImageObjectInstance * createUnknown ( Size2d pos, Size2d rect );

		ImageObjectInstance() {}

		ImageObjectInstance ( Size2d pos, Size2d rect, ImageObject * object )
		{
			this->pos = pos;
			this->rect = rect;
			this->object = object;
		}

		//bool operator!=( ImageObjectInstance const &x ) const
		//{
		//}

		ImageObject const * getObject ( ) const { return object; }

		bool isUnknown ( ) const { return getObject ( ) == nullptr; }

		std::vector<ImageObjectInstance*> neighbour;

		void setPos ( Size2d pos )
		{
			this->pos = pos;
		}

		void setRect ( Size2d rect )
		{
			this->rect = rect;
		}
		
		std::vector<ImageObjectInstance*> recognize()
		{
			if (!object) {
				std::vector<ImageObjectInstance*> res;
				ImageObjectInstance * instance = createUnknown ( getPos ( ), getRect ( ) );
				res.push_back ( instance );
				return res;
			}

			float random_number = ((float)rand ( )) / RAND_MAX;

			float prob = object->getProb() * 1;
			if (random_number < prob)
				return std::vector< ImageObjectInstance* > ( { this } );
			else {
				switch (object->getRecognizingPolicy()) {

				case RecognizingPolicy::unknown: {
					std::vector<ImageObjectInstance*> res;
					ImageObjectInstance * instance = createUnknown( getPos ( ), getRect ( ) );
					res.push_back ( instance );
					return res;
				}

				case RecognizingPolicy::similar: {
					std::vector<ImageObjectInstance*> res;
					auto similar = object->getSimilarObjects ( );
					if (similar.empty ( )) {
						ImageObjectInstance * instance = createUnknown ( getPos ( ), getRect ( ) );
						res.push_back ( instance );
						return res;
					}
					size_t index = rand ( ) % similar.size ( );
					ImageObjectInstance * instance = new ImageObjectInstance ( getPos ( ), getRect ( ), similar[index] );
					res.push_back ( instance );
					return res;
				}

				case RecognizingPolicy::neighbour: {
					return std::vector< ImageObjectInstance* > ( neighbour.begin ( ), neighbour.end ( ) );
				}

				case RecognizingPolicy::parts: {
					std::vector<ImageObjectInstance*> res;
					auto parts = object->getParts ( );
					if (parts.empty ( )) {
						ImageObjectInstance * instance = createUnknown ( getPos ( ), getRect ( ) );
						res.push_back ( instance );
						return res;
					}
					size_t index = rand ( ) % parts.size ( );
					ImageObjectInstance * instance = new ImageObjectInstance ( getPos ( ), getRect ( ), parts[index] );
					res.push_back ( instance );
					return res;
				}

				}
			}
			return std::vector< ImageObjectInstance* > ( );
		}

		Size2d getPos ( ) const { return pos; }
		Size2d getRect ( ) const { return rect; }
	};

	//void operator=( ImageObjectInstance* a, ImageObjectInstance* b )
	//{

	//}

	class UnknownImageObjectInstance : public ImageObjectInstance
	{
	public:
		UnknownImageObjectInstance ( Size2d pos, Size2d rect );
	};


}

#endif