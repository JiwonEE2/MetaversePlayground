/*
���Ⱑ Vehicle�� �������
// �����
// �������̵�
// �� ����� ���� Ŭ�������� �θ�Ŭ������ �Լ��� ������ ������
*/
#include<iostream>
#pragma once	// ��� �ߺ� ����
class Vehicle
{
protected:
	std::string name;
public:
	Vehicle(const std::string& n);
	virtual ~Vehicle();

	// �����Լ� 
	virtual void Move()const;
};

