#include <src/entities/explosions/BigExplosion.h>
#include <src/Config.h>

BigExplosion::BigExplosion(Map* m, Scene* s, int x, int y) : Explosion(m, s, x, y, Config::bigExplosion, 0.06)
{
}
BigExplosion::~BigExplosion()
{
}