#pragma once

//���ͷ�ļ�������Ϸ״̬��ȫ����Ϣ
//�����ṩһ��update()��������ˢ�£�����Ϊ����inputManager�����Ĳ���

#include "charaterGroup.h"
#include<Windows.h>

class gameState {
public: 
	gameState();

	charaterGroup group1;
	charaterGroup group2;

	unsigned rangex, rangey; //���ڷ�Χ��Ҳ���ӵ�����ɫ�ȵĿ��ƶ���Χ

	//ˢ��״̬
	void update();

	//����״̬
	void reset();



};


//���������Ϸ״̬���»��ƴ���
void rePaint(HWND &);