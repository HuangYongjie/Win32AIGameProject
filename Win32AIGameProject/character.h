#pragma once

//描述角色
#include<string>

class character {
public:
	character();

	void move();
	void fire();
	void kill();
	void reset();

private:
	//血量、精力、位置、buff、速度、死活
	unsigned heath, strength, posX, posY;
	float buff, speedX, speedY;
	bool alive;

	std::string ID;

	//高、宽、移动范围
	unsigned width, height, moveAreaX, moveAreaY;

	unsigned skillStorage;//技能存量

	unsigned color[3];
};


//描述操作
struct actions {
	float accx, accy;	//x、y方向加速度
	float firex, firey;	//x、y方向开火强度分量
	float chanceOfSk1, chanceOfSk2, chanceOfSk3, chanceOfSk4, chanceOfNoSk;	//各个技能几率
};
