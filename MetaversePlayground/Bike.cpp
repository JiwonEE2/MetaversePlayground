#include "Bike.h"

Bike::Bike(const std::string& n)
{
	std::cout << "�ڽ�(Bike) ������ ȣ��" << std::endl;
}

Bike::~Bike()
{
	std::cout << "�ڽ�(Bike) �Ҹ��� ȣ��" << std::endl;
}

void Bike::Move() const
{
	std::cout << name << "�� �ڽ�Ŭ���� Bike �Լ� ȣ��" << std::endl;
}
