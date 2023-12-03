#ifndef ___BonusShovel_h___
#define ___BonusShovel_h___
#include <src/entities/Bonus.h>

class BonusShovel : public Bonus
{
public:
	BonusShovel(Map* m, Scene* s, int x, int y);
	~BonusShovel();
protected:
	virtual void activated(HeroTank* hero);
};

#endif