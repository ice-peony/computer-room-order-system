#pragma once
#include <iostream>
using namespace std;
#include "Identity.h"
#include "globalFile.h"
#include <vector>
#include <fstream>
#include "computerRoom.h"
#include "orderFile.h"

//ѧ����
class Student :public Identity
{
public:
	//Ĭ�Ϲ���
	Student();

	//�вι��죨ѧ�š����������룩
	Student(int id, string name, string pwd);

	//�˵�����
	virtual void openMenu();

	//����ԤԼ
	void applyOrder();

	//�鿴�ҵ�ԤԼ
	void showMyOrder();

	//�鿴����ԤԼ
	void showAllOrder();

	//ȡ��ԤԼ
	void cancelOrder();

	//ѧ��ѧ��
	int m_Id;

	//��������
	vector<ComputerRoom> vCom;
};