#ifndef ___FontLoader_h___
#define ___FontLoader_h___
#include "Font.h"

class FontLoader
{
public:
	static Font* load(const char* fname);
};

#endif