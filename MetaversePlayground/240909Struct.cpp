/*
<구조체>
Struct
- 구조체는 여러 개의 변수를 묶어 하나의 데이터 단위로 정의하는 사용자 정의 데이터 형식
- 구조체는 각각의 변수를 멤버로 가지고 이러한 멤버들은 서로 다른 데이터 타입..
- C++에서는 함수도 포함이 가능함

struct(키워드) 구조체이름
struct MyStruct{

}
*/
#include<iostream>
using namespace std;

// 키워드 구조체이름
struct Student {
	// 학생과 관련된 데이터들
	string name;		// 학생 이름
	int age;
	int phoneNumber;
};

// 출력함수
void Print(int a, int b) {

}

struct Point {
	int x;			// 멤버변수
	int y;			// 멤버변수
	void Print();	// 멤버함수. C++에서는 함수도 멤버로 가능
};

struct Person {
	string name;
	string phoneNumber;
	int age;
};

struct Test {
	short a;	// 2
	char c;		// 1
	int b;		// 4
	// 자료형이 다른 변수 순서에 따라 크기가 달라진다
};
// CPU -> 4바이트씩 넘기는데 short 2개 하면 2바이트 남기 때문에 다음에 char 할 시 1칸이기에 옆에 채울 수 있다.
// 다음 줄에 int 4바이트 할당됨. **패딩.

struct Point1 {
	double x;
	double y;
};

// 두 점 사이의 거리를 계산하는 함수
double CalculateDistance(Point1 p1, Point1 p2) {
	double deltaX = p2.x - p1.x;
	double deltaY = p2.y - p1.y;

	return sqrt(deltaX * deltaX + deltaY * deltaY);
}

int main() {
	Test t;
	cout << sizeof(t) << endl;	// 12

	// 구조체 변수 생성
	Student st;

	// 구조체 멤버에 값을 할당
	st.name = "홍길동";
	st.age = 10;
	st.phoneNumber = 1234;

	cout << "이름 : " << st.name << endl;
	cout << "나이 : " << st.age << endl;
	cout << "전화번호 : " << st.phoneNumber << endl;

	cout << "=================================================\n";
	
	Point p;
	p.x = 10;	// 각 멤버에 할당
	p.y = 20;
	cout << "구조체 p.x의 값 : " << p.x << endl;
	cout << "구조체 p.y의 값 : " << p.y << endl;
	p.Print();

	Point p1 = { 50,120 };	// 생성과 동시에 초기화
	cout << "구조체 p.x의 값 : " << p1.x << endl;
	cout << "구조체 p.y의 값 : " << p1.y << endl;

	// 3.
	Person per[3];

	per[0].name = "경일이";
	per[0].phoneNumber = "010-4567-1234";
	per[0].age = 10;

	per[1].name = "대훈이";
	per[1].phoneNumber = "010-4567-1234";
	per[1].age = 30;

	per[2].name = "권지용";
	per[2].phoneNumber = "010-4567-1234";
	per[2].age = 20;

	// 구조체 배열의 0번째 인덱스
	cout << per[0].name << per[0].phoneNumber << per[0].age << endl;

	Person st1[3] = {
		{"세종대왕","123123",50},
		{"세왕","1234523",20},
		{"왕","123546123",30},
	};

	for (int i = 0; i < 3; i++) {
		cout << st1[i].name << st1[i].phoneNumber << st1[i].age << endl;
	}

	Point1 point1 = { 1.0,2.0 };
	Point1 point2 = { 4.0,6.0 };

	double distance = CalculateDistance(point1, point2);

	cout << "두 점 사이의 거리 : " << distance << endl;	
}

void Point::Print() {
	cout << "나는 Point 구조체의 멤버 함수" << endl;
}