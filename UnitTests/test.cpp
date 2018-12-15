#include "pch.h"
#include "../Lab1/Handler.h"

using namespace ImageRecognition;

TEST(AddObject, WrongSize) {
	Image * image = new Image ( 0, Size2d ( 1, 1 ) );

	ImageObject * obj_type = new ImageObject ( "tmp", RecognizingPolicy::unknown, 0.5 );

	ImageObjectInstance * object = new ImageObjectInstance ( Size2d ( 0, 0 ), Size2d ( 2, 2 ), obj_type );

	EXPECT_EQ(image->addObject(object), false);
	EXPECT_TRUE(true);
}

TEST ( Tmp, TestName )
{
	Image * image = new Image ( 0, Size2d ( 1, 1 ) );

	ImageObject * obj_type = new ImageObject ( "tmp", RecognizingPolicy::unknown, 0.5 );

	ImageObjectInstance * object = new ImageObjectInstance ( Size2d ( 0, 0 ), Size2d ( 2, 2 ), obj_type );

	EXPECT_EQ ( image->addObject ( object ), false );
	EXPECT_TRUE ( true );
}