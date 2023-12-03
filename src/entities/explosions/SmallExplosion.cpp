#include <src/entities/explosions/SmallExplosion.h>
#include <src/Config.h>

SmallExplosion::SmallExplosion(Map* m, Scene* s, int x, int y) : Explosion(m, s, x, y, Config::smallExplosion, 0.04)
{
}
SmallExplosion::~SmallExplosion()
{
}