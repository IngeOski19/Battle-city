#ifndef ___BonusClock_h___
#define ___BonusClock_h___
#include <src/entities/Bonus.h>

class BonusClock : public Bonus
{
public:
	BonusClock(Map* m, Scene* s, int x, int y);
	~BonusClock();
protected:
	virtual void activated(HeroTank* hero);
};

#endif