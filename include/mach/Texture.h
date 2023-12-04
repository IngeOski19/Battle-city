#ifndef ___Texture_h___
#define ___Texture_h___
#include <mach/Color.h>

class Texture
{
public:
	Texture() {}
	virtual ~Texture() {}
public:
	virtual int getWidth() const = 0;
	virtual int getHeight() const = 0;
};

#endif