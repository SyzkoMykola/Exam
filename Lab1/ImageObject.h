#ifndef KNOWN_IMAGE_OBJECT_H
#define KNOWN_IMAGE_OBJECT_H

#include "pch.h"
#include "Size2d.h"
#include <vector>

namespace ImageRecognition
{

	enum class RecognizingPolicy
	{
		unknown,
		similar,
		parts,
		neighbour
	};

	class ImageObject
	{
	public:
		ImageObject ( char const * title, RecognizingPolicy recognizingPolicy, float prob )
		{
			this->title = std::string(title);
			this->recognizingPolicy = recognizingPolicy;
			this->prob = prob;
		}
		
		float getProb ( ) const { return prob; }

		RecognizingPolicy getRecognizingPolicy ( ) const { return recognizingPolicy; }

		bool operator== ( char const * title )
		{
			return this->title == title;
		}

		std::vector<ImageObject*> getSimilarObjects ( )
		{
			return similar;
		}

		std::string getTitle ( ) const { return title; }

		void setSimilarObjects ( std::vector<ImageObject*> const & similar )
		{
			this->similar = similar;
		}

		void setParts ( std::vector<ImageObject*> const & parts )
		{
			this->parts = parts;
		}

		std::vector<ImageObject*> getParts()
		{
			return parts;
		}

	private:

		std::vector<ImageObject*> similar;
		std::vector<ImageObject*> parts;

//		u32 const shrinking_factor = 0.5;

		float prob;

		std::string title;
		RecognizingPolicy recognizingPolicy;
	};
}

#endif