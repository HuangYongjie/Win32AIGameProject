#pragma once

//��ɫ��������Ӧ��Ϊ��ҿ�������AI�������ĸ���

#include "gameState.h"

class controller {
public:
	actions getActions(gameState &);
};