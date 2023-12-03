#include <src/entities/Entity.h>

Entity::Entity(Map* m, Scene* s, int px, int py, int wd, int ht)
: map(m)
, scene(s)
, x(px)
, y(py)
, width(wd)
, height(ht)
, removable(false)
{
}
Entity::~Entity()
{
}