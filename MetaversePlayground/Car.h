// 여긴 자식클래스
#include"Vehicle.h"		// 이거 하고 상속 가능
#pragma once
class Car :public Vehicle
{
public:
	Car(const std::string& n);
	~Car();

	void Move()const override;		// override : 오버라이딩한 함수라고 명시(없어도 됨)
};

