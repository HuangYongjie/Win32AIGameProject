#pragma once

//���ͷ�ļ������ݸ�������̡�������
//������Ϸ��Ƴɽ���TIMER��Ϣʱ����״̬����˽��յ�����ʱ����������״̬�����ǰ������¼����
//�ȴ��´ν���TIMER��Ϣʱ���������Ҫ����һ��������¼����

#include<Windows.h>
#include "inputActions.h"

class inputManager {
public:
	inputManager();

	inputActions getAction();

	void recordInput()
};