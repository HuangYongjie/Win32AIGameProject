#pragma once

//������ɫ
#include<string>

class charater {
public:
	charater();

	void move();
	void fire();
	void kill();
	void reset();

private:
	//Ѫ����������λ�á�buff���ٶȡ�����
	unsigned heath, strength, posX, posY;
	float buff, speedX, speedY;
	bool alive;

	std::string ID;

	//�ߡ����ƶ���Χ
	unsigned width, height, moveAreaX, moveAreaY;

	unsigned skillStorage;//���ܴ���

	unsigned color[3];
};