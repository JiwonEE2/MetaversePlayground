#include<iostream>
using namespace std;
/*
===============================================
* 연산자 재정의 (Operator Overloading)
- 사용자정의 자료형이나 클래스의 연산자를 재정의하여 여러 의미로 사용한다
- 객체 간의 산술연산, 비교, 대입 등을 가능하게 해줌
- 단, 일부 연산자는 오버로딩 불가

< 연산자 재정의 >
// 반환형 operator연산자기호(매개변수){함수내용}
// 기본 연산자의 연산을 함수로 재정의하여 기능 구현
===============================================
*/

// const : 상수화. 수정 불가능. 안정성 보장

// #define MAX 10		// MAX를 10으로 치환
const int MAX = 10;		// 위와 같음(권장)

struct Point {
	float x;
	float y;

	// 생성자
	Point(float x, float y) {
		this->x = x;	// -> : Pointer에서 사용, this : 내 자신을 가리키는 포인터
		this->y = y;
	}
	// 1. 멤버함수를 통한 연산자 재정의
	Point operator+(Point& other) {
		return Point(this->x + other.x, this->y + other.y);
	}

	// const로 선언된 함수 내부에서는 const가 붙지 않은 함수를 호출할 수 없다?
	void Test()const {

	}

	// Point 구조체의 멤버함수
	void Print() {
		Test();
		cout << "(" << x << ", " << y << ")\n";
	}

	float GetX()const {
		return this->x;		// 멤버변수 x를 변경하지 않겠다. 읽기 전용 함수로 만든다
	}
};

// 2. 전역함수를 통한 연산자 재정의
Point operator-(Point& left, Point& right) {
	return Point(left.x - right.x, left.y - right.y);
}

void PrintArr(const int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << endl;
	}
	// arr[0] = 5;		// 배열 변경 불가
}

int main() {
	int arr[MAX];

	for (int i = 0; i < MAX; i++) {

	}

	// 변수끼리 : 연산자 오버로딩 지원하기에 가능함
	//const int num = 10;		// 상수화. 수정 불가능. 안정성 보장
	//num = 20;

	Point vec1 = Point(2, 1);
	Point vec2 = Point(3, 1);

	Point add = vec1 + vec2;	// 객체끼리의 연산
	Point sub = vec1 - vec2;

	add.Print();
	sub.Print();
}