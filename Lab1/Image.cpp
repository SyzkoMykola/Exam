#include "Image.h"

using std::vector;
using namespace ImageRecognition;

vector<ImageObjectInstance*> const & ImageRecognition::Image::recognizeObjects ( )
{
	last_recognized_objects.clear ( );
	for (auto object : objects) {
		std::vector<ImageObjectInstance*> current = object->recognize ( );
		last_recognized_objects.insert ( last_recognized_objects.end ( ), current.begin ( ), current.end ( ) );
	}
	return last_recognized_objects;
}

std::vector<ImageObjectInstance*> const & ImageRecognition::Image::getLastRecognizedObjects ( ) const
{
	return last_recognized_objects;
}
