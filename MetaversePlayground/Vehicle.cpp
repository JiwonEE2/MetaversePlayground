#include "Vehicle.h"	// "" : 사용자가 직접 만든 라이브러리
// #include<iostream>		// <> : 이미 만들어져 있는 라이브러리
/*
실제 구현부
*/

Vehicle::Vehicle(const std::string& n)
{
	std::cout << "부모 클래스 생성자 호출" << std::endl;
}

Vehicle::~Vehicle()
{
	std::cout << "부모 클래스 소멸자 호출" << std::endl;
}

void Vehicle::Move() const
{
	std::cout << name << "의 부모 클래스의 함수 호출" << std::endl;
}
