#ifndef ___BigExplosion_h___
#define ___BigExplosion_h___
#include <src/entities/Explosion.h>

class BigExplosion : public Explosion
{
public:
	BigExplosion(Map* m, Scene* s, int x, int y);
	~BigExplosion();
};

#endif