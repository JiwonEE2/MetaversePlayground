/*
==================================================
class
- 객체 지향 기법은 소프트웨어 설계에 있어서 많은 장점을 제공하는 강력한 기술
ㄴ 개념을 이해하기 까다롭다
- 객체
ㄴ 클래스는 객체를 정의하는 틀이나 설계도
ㄴ 틀을 만들었다면 써먹어야 
ㄴ 객체는 설계도를 기반으로 실체화 시키는 것
ㄴ 인스턴스화 : 클래스를 사용하여 객체를 생성하는 과정을 의미
==================================================
class 자동차{
// 멤버변수(속성->부품)
// 멤버함수(기능->브레이크,방향지시등...)





*/
#include<iostream>
using namespace std;

// C++에서는 구조체도 상속 허용
// class와의 차이는 defalt 접근 제한 지정자가 다르다는 것 뿐
struct Circle {
// public:
	int radius;
	string color;
	double calcArea() {
		return 3.14 * radius * radius;
	}
};

class CCircle {
// private:
	int radius;
	string color;
	double calcArea() {
		return 3.14 * radius * radius;
	}
};

int main() {
	Circle c;
	c.radius = 5;
	c.calcArea();

	CCircle cc;
	// cc. -> 접근 불가
}