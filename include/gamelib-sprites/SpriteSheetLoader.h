#ifndef ___SpriteSheetLoader_h___
#define ___SpriteSheetLoader_h___

class SpriteSheet;

class SpriteSheetLoader
{
public:
	static SpriteSheet* load(const char* fname);
};

#endif