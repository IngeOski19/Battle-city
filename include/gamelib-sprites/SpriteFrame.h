#ifndef ___SpriteFrame_h___
#define ___SpriteFrame_h___

class SpriteImage;

class SpriteFrame
{
public:
	SpriteImage*	image;
//	int				imageIndex;
public:
	SpriteFrame() : image(0)
//	SpriteFrame() : imageIndex(-1)
	{
	}
	~SpriteFrame()
	{
	}
};

#endif