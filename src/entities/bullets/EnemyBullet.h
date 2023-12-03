#ifndef ___EnemyBullet_h___
#define ___EnemyBullet_h___
#include <src/entities/Bullet.h>

class EnemyBullet : public Bullet
{
public:
	EnemyBullet(Map* m, Scene* s, int x, int y, Direction dir, EnemyTank* shooter);
	~EnemyBullet();
};

#endif