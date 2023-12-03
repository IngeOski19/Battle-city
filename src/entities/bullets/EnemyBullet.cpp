#include <src/entities/bullets/EnemyBullet.h>
#include <src/entities/tanks/EnemyTank.h>

EnemyBullet::EnemyBullet(Map* m, Scene* s, int x, int y, Direction dir, EnemyTank* shooter) : Bullet(m, s, x, y, dir, shooter, 0.01, false)
{
}
EnemyBullet::~EnemyBullet()
{
}