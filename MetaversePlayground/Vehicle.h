/*
여기가 Vehicle의 헤더파일
// 선언부
// 오버라이딩
// ㄴ 상속을 받은 클래스에서 부모클래스의 함수의 동작을 재정의
*/
#include<iostream>
#pragma once	// 헤더 중복 방지
class Vehicle
{
protected:
	std::string name;
public:
	Vehicle(const std::string& n);
	virtual ~Vehicle();

	// 가상함수 
	virtual void Move()const;
};

