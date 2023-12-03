#ifndef ___BonusGrenade_h___
#define ___BonusGrenade_h___
#include <src/entities/Bonus.h>

class BonusGrenade : public Bonus
{
public:
	BonusGrenade(Map* m, Scene* s, int x, int y);
	~BonusGrenade();
protected:
	virtual void activated(HeroTank* hero);
};

#endif