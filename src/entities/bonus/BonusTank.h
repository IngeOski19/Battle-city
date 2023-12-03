#ifndef ___BonusTank_h___
#define ___BonusTank_h___
#include <src/entities/Bonus.h>

class BonusTank : public Bonus
{
public:
	BonusTank(Map* m, Scene* s, int x, int y);
	~BonusTank();
protected:
	virtual void activated(HeroTank* hero);
};

#endif