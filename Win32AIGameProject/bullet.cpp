#include "bullet.h"


bullet::bullet(unsigned posx, unsigned posy, float speedx, float speedy, float power,int BType) :
	x(posx), y(posy), speedx(speedx), speedy(speedy), power(power), BType(BType) {}

/*
void bullet::update(float deltat, gameState& gs)
{
	this->x += deltat * speedx;
	this->y += deltat * speedy;
	collision(gs);
}

void bullet::destroy()
{
	delete this;//此对象只能用new关键字创建
}

void bullet::collision(gameState& gs)
{
	//检测是否到达地图边界，是则删掉自己
	if (this->x < 0 || this->x > gs.rangex || this->y < 0 || this->y > gs.rangey) destroy();

	//检测与character的碰撞，需要能对gameState里的character进行遍历
}
*/