#include "Bike.h"

Bike::Bike(const std::string& n)
{
	std::cout << "자식(Bike) 생성자 호출" << std::endl;
}

Bike::~Bike()
{
	std::cout << "자식(Bike) 소멸자 호출" << std::endl;
}

void Bike::Move() const
{
	std::cout << name << "의 자식클래스 Bike 함수 호출" << std::endl;
}
