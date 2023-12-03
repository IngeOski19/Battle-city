#include <src/base/Player.h>
#include <src/entities/tanks/HeroTank.h>

Player::Player()
: score(0)
, lifes(3)
, stars(HeroTank::STAR_NONE)
{
}
Player::~Player()
{
}
void Player::reset()
{
	score = 0;
	lifes = 3;
	stars = HeroTank::STAR_NONE;
}