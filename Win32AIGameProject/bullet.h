#pragma once

//描述一颗子弹
//子弹对象由character对象调用fire()函数创建

//#include "gameState.h"

class bullet {
public:
	bullet(unsigned posx, unsigned posy, float speedx, float speedy, float power, int BType);
	unsigned x, y;
	void update(float deltat);
	void destroy();

private:
	float speedx, speedy, power;
	int BType;
	void collision();
};