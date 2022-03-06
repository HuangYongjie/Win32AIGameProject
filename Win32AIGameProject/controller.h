#pragma once

//角色控制器，应作为玩家控制器与AI控制器的父类

#include "gameState.h"

class controller {
public:
	actions getActions(gameState &);
};