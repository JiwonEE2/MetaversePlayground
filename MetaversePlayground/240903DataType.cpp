#include<iostream>
/*
==========Data Type(자료형)==========
- 자료형은 데이터를 표현하는 방법
ㄴ 변수는 데이터의 저장을 위해 할당된 메모리 공간에 붙혀진 이름
ㄴ 메모리 공간의 할당에 앞서 정수나 실수를 저장할건 지 결정해야 함
ㄴ 만약 정수형을 저장한다고 가정할 때 몇 바이트를 사용할건 지 결정해야 함
ㄴ "정수를 저장할 건데 크기를 4byte로 하고 이름은 num으로 함."
---------> int num;


====== 기본 자료형의 종류와 데이터의 표현 범위=====
자료형				크기(byte)
char				1
short				2			-32.~+32
int					4			-21억~+21억~
long				
long long			

실수형 (소수점 정밀도 차이)
float				4
double				8

bool
*/

int main() {
	std::cout << "int 형의 크기 : " << sizeof(int) << "바이트" << std::endl; // sizeof : 자료형의 크기를 나타냄
	std::cout << "short 형의 크기 : " << sizeof(short) << "바이트" << std::endl;
	std::cout << "char 형의 크기 : " << sizeof(char) << "바이트" << std::endl;
	std::cout << "long 형의 크기 : " << sizeof(long) << "바이트" << std::endl;
	std::cout << "long long 형의 크기 : " << sizeof(long long) << "바이트" << std::endl;
	std::cout << "float 형의 크기 : " << sizeof(float) << "바이트" << std::endl;
	std::cout << "double 형의 크기 : " << sizeof(double) << "바이트" << std::endl;
	std::cout << "bool 형의 크기 : " << sizeof(bool) << "바이트" << std::endl;

	std::cout << "=========================================" << std::endl;

	//int a = 'b'; // 아스키 코드 번호 출력(98)
	//char num1 = 100; // 아스키 코드 100번째의 문자 출력(d)
	//std::cout << a << std::endl;
	//std::cout << num1 << std::endl;

	char num1 = 1;
	char num2 = 2;

	char result = 0;

	short num3 = 300;
	short num4 = 200;
	short result1 = 0;

	std::cout << "변수 num1의 사이즈 : " << sizeof(num1) << std::endl; // 4
	std::cout << "변수 num2의 사이즈 : " << sizeof(num2) << std::endl; // 2
	std::cout << "변수 result의 사이즈 : " << sizeof(result) << std::endl; // 1
	std::cout << "=========================================" << std::endl;
	std::cout << "변수 num3의 사이즈 : " << sizeof(num3) << std::endl;
	std::cout << "변수 num4의 사이즈 : " << sizeof(num4) << std::endl;
	std::cout << "변수 result1의 사이즈 : " << sizeof(result1) << std::endl;

	std::cout << "char 변수 num1+num2의 사이즈 : " << sizeof(num1 + num2) << std::endl;
	std::cout << "short 변수 num3+num4의 사이즈 : " << sizeof(num3 + num4) << std::endl;

	float a = 3.141592; // int 형일 경우 3
	std::cout << a << std::endl;
}