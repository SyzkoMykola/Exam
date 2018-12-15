#ifndef PCH_H
#define PCH_H

#include <algorithm>

namespace ImageRecognition
{
	typedef unsigned int u32;

	template<class T>
	const T& clamp ( const T& x, const T& upper, const T& lower )
	{
		return std::min ( upper, std::max ( x, lower ) );
	}
}

#endif