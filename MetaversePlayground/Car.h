// ���� �ڽ�Ŭ����
#include"Vehicle.h"		// �̰� �ϰ� ��� ����
#pragma once
class Car :public Vehicle
{
public:
	Car(const std::string& n);
	~Car();

	void Move()const override;		// override : �������̵��� �Լ���� ���(��� ��)
};

