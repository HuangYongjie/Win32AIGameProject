#pragma once

//����һ���ӵ�
//�ӵ�������character�������fire()��������

#include "gameState.h"

class bullet {
public:
	bullet(unsigned posx, unsigned posy, float speedx, float speedy, float power, int type);
	unsigned x, y;
	void update(float deltat, gameState& gs);
	void destroy();

private:
	float speedx, speedy, power;
	int type;
	void collision(gameState &gs);
};