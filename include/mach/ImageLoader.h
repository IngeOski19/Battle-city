#ifndef ___ImageLoader_h___
#define ___ImageLoader_h___
#include "Image.h"

class ImageLoader
{
public:
	static Image* load(const char* fileName);
};

#endif