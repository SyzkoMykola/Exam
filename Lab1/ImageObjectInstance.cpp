#include "ImageObjectInstance.h"

using namespace ImageRecognition;

UnknownImageObjectInstance::UnknownImageObjectInstance(Size2d pos, Size2d rect ) : ImageObjectInstance ( pos, rect, nullptr ) {}

ImageObjectInstance * ImageRecognition::ImageObjectInstance::createUnknown ( Size2d pos, Size2d rect )
{
	UnknownImageObjectInstance * p = new UnknownImageObjectInstance ( pos, rect );
	return static_cast<ImageObjectInstance*>(p);
}
