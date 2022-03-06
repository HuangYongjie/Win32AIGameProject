#pragma once

//这个头文件描述游戏状态的全部信息
//对外提供一个update()函数用于刷新，参数为经过inputManager处理后的操作

#include "charaterGroup.h"
#include "bulletGroup.h"
#include<Windows.h>

class gameState {
public: 
	gameState();

	charaterGroup group1;
	charaterGroup group2;
	bulletGroup bg;

	unsigned rangex, rangey; //窗口范围，也是子弹、角色等的可移动范围

	//刷新状态
	void update();

	//重置状态
	void reset();



};


//负责根据游戏状态重新绘制窗口
void rePaint(HWND &);