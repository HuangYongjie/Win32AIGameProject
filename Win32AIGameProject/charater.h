#pragma once

//描述角色
#include<string>

class charater {
public:
	charater();

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