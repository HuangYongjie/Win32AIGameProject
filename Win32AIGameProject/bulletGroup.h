#pragma once

//���ڹ��������ӵ�

#include<vector>
#include "bullet.h"

class bulletGroup {
public:
	bulletGroup();

	void update();//����״̬

	void addBullet();//����ӵ�����character����ʱ����

	std::vector<bullet> bullets;



};