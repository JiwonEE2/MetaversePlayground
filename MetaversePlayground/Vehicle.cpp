#include "Vehicle.h"	// "" : ����ڰ� ���� ���� ���̺귯��
// #include<iostream>		// <> : �̹� ������� �ִ� ���̺귯��
/*
���� ������
*/

Vehicle::Vehicle(const std::string& n)
{
	std::cout << "�θ� Ŭ���� ������ ȣ��" << std::endl;
}

Vehicle::~Vehicle()
{
	std::cout << "�θ� Ŭ���� �Ҹ��� ȣ��" << std::endl;
}

void Vehicle::Move() const
{
	std::cout << name << "�� �θ� Ŭ������ �Լ� ȣ��" << std::endl;
}
