#ifndef ___SmallExplosion_h___
#define ___SmallExplosion_h___
#include <src/entities/Explosion.h>

class SmallExplosion : public Explosion
{
public:
	SmallExplosion(Map* m, Scene* s, int x, int y);
	~SmallExplosion();
};

#endif