#ifndef ___TextureLoader_h___
#define ___TextureLoader_h___
#include "Texture.h"

class TextureLoader
{
public:
	static Texture* load(const char* fileName);
};

#endif