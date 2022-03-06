#pragma once

//用于管理所有子弹

#include<vector>
#include "bullet.h"

class bulletGroup {
public:
	bulletGroup();

	void update();//更新状态

	void addBullet();//添加子弹，由character开火时调用

	std::vector<bullet> butts;



};