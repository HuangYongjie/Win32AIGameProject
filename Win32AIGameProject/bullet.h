#pragma once

//����һ���ӵ�
//�ӵ�������character�������fire()��������

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