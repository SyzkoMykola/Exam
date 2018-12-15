#ifndef SIZE_2D_H
#define SIZE_2D_H

#include "pch.h"

namespace ImageRecognition
{
	struct Size2d
	{
		Size2d ( ) : Size2d ( 0, 0 ) {}

		Size2d ( u32 y, u32 x )
		{
			this->y = y;
			this->x = x;
		}

		u32 square_area ( ) const { return y * x; }

		u32 y;
		u32 x;
	};
}

#endif