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
	delete this;//�˶���ֻ����new�ؼ��ִ���
}

void bullet::collision(gameState& gs)
{
	//����Ƿ񵽴��ͼ�߽磬����ɾ���Լ�
	if (this->x < 0 || this->x > gs.rangex || this->y < 0 || this->y > gs.rangey) destroy();

	//�����character����ײ����Ҫ�ܶ�gameState���character���б���
}
*/