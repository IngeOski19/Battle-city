#ifndef ___BonusStar_h___
#define ___BonusStar_h___
#include <src/entities/Bonus.h>

class BonusStar : public Bonus
{
public:
	BonusStar(Map* m, Scene* s, int x, int y);
	~BonusStar();
protected:
	virtual void activated(HeroTank* hero);
};

#endif