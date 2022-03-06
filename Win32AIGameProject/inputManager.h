#pragma once

//这个头文件的内容负责处理键盘、鼠标操作
//整个游戏设计成接收TIMER消息时更新状态，因此接收到输入时不立即更新状态，而是把输入记录下来
//等待下次接收TIMER消息时处理，因此需要定义一个容器记录输入

#include<Windows.h>
#include "inputActions.h"

class inputManager {
public:
	inputManager();

	inputActions getAction();

	void recordInput()
};