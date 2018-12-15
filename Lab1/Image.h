#ifndef IMAGE_H
#define IMAGE_H

#include "pch.h"
#include "Size2d.h"
#include "ImageObjectInstance.h"
#include <chrono>
#include <vector>
#include <set>

namespace ImageRecognition
{
	class Image
	{
	public:
		Image( u32 id, Size2d rect )
		{
			this->id = id;
			this->rect = rect;
			created = std::chrono::system_clock::now();
		}

		~Image ( )
		{
			if (last_recognized_objects.empty()) {
				for (auto & o : objects) {
					delete o;
					o = nullptr;
				}
			}
			else for (int i = 0; i < objects.size ( ); ++i) {
				if (last_recognized_objects[i]->isUnknown()) {
					delete last_recognized_objects[i];
				}
				delete objects[i];
				last_recognized_objects[i] = nullptr;
				objects[i] = nullptr;
			}
			objects.clear ( );
			last_recognized_objects.clear ( );
		}

		u32 getId ( ) const { return id; }
		Size2d getRect ( ) const { return rect; }


		std::vector<ImageObjectInstance *> const & getObjects ( ) const
		{
			return objects;
		}

		std::chrono::system_clock::time_point getCreated ( ) const
		{
			return created;
		}

		std::vector<ImageObject*> getUniqueRealObjects ( ) const
		{

		}

		std::vector<ImageObject*> getUniqueRecognizedObjects ( ) const
		{

		}

		std::vector<ImageObjectInstance*> const & recognizeObjects ( );

		std::vector<ImageObjectInstance*> const & getLastRecognizedObjects ( ) const;

		bool addObject ( ImageObjectInstance* o )
		{
			if (o->getPos().y + o->getRect ( ).y > rect.y || o->getPos().x + o->getRect ( ).x > rect.x)
				return false;
			objects.push_back ( o );
			return true;
		}

		bool removeObject ( ImageObjectInstance* o )
		{
			for (size_t i = 0; i < objects.size ( ); ++i) {
				if (objects[i] == o)
					objects.erase ( objects.begin ( ) + i );
			}
		}


		bool operator< ( Image im )
		{
			return this->created < im.created;
		}

	private:


		u32 id;
		Size2d rect;
		std::chrono::system_clock::time_point created;
		std::vector<ImageObjectInstance*> objects;
		std::vector<ImageObjectInstance*> last_recognized_objects;
	};

}


#endif