//#ifndef IMAGE_RECOGNIZER_H
//#define IMAGE_RECOGNIZER_H
//
//#include "pch.h"
//#include "Image.h"
//#include "UnknownImageObjectInstance.h"
//#include <vector>
//#include <algorithm>
//
//namespace ImageRecognition
//{
//
//	//
//	class ImageRecognizer
//	{
//	public:
//
//		// prob [0,1]
//		ImageRecognizer ( float prob )
//		{
//			this->prob = clamp ( prob, 0.0f, 1.0f );
//		}
//
//		float getProb( ) const { return prob; }
//
//		virtual std::vector< ImageObject* > a ( ImageObject* object )
//		{
////			float random_number = ( ( double )rand ( ) ) / RAND_MAX;
////
//////			if (random_number < prob)
//////				return std::vector< ImageObject* > ( { static_cast< ImageObject* >( object ) } );
//////			else {
////				std::vector< ImageObject* > recognized_objects = object->tryRecognize ( );
//////				return recognized_objects;
//////			}
//		}
//
//	private:
//		float prob;
//	};
//}
//
//#endif