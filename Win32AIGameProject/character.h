#pragma once

//������ɫ
#include<string>

class character {
public:
	character();

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


//��������
struct actions {
	float accx, accy;	//x��y������ٶ�
	float firex, firey;	//x��y���򿪻�ǿ�ȷ���
	float chanceOfSk1, chanceOfSk2, chanceOfSk3, chanceOfSk4, chanceOfNoSk;	//�������ܼ���
};
