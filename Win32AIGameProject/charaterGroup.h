#pragma once

//����һ�ӽ�ɫ

#include "character.h"
#include<string>

class charaterGroup {
public:
	charaterGroup();

	std::string groupName;

	character cht1, ch12, cht3;

	void update();
};