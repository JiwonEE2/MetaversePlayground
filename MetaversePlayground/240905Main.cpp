/*
함수
- 특정 작업을 수행하는 코드의 집합
- 코드의 안정성, 에러를 수정하기 쉽다.
- 볼륨이 커지는 프로그램일수록 수정, 유지보스가 어렵다
ㄴ 기능별로 세분화 시키는 것이 필요
- 코드의 재사용성이 좋다

기본적으로 함수는 매개변수(파라미터)유무와 반환값의 유무에 따라 함수의 형태를 네 개의 형태로 나눌 수 있다.

1. 매개변수와 반환값이 모두 있는 경우
2. 매개변수가 있고 반환값이 없는 경우
3. 매개변수가 없고 반환값이 있는 경우
4. 매개변수와 반환값이 모두 없는 경우

*/
// 1. 지역변수
/*
- 중괄호 내에 선언되는 변수는 모두 지역이다
- 활동 영역은 변수가 선언된 블록 내에서만 유효

*/

#include<iostream>

// 1. 매개변수와 반환값이 모두 있는 경우
int Sum(int a, int b) {
	int res = a + b;
	return res;
}

// 2. 매개변수가 있고 반환값이 없는 경우
void MyPrint(int num) {
	std::cout << num << std::endl;
	// return num;
}

// 3. 매개변수가 없고 반환값이 있는 경우
int ReadNum() {
	int num;
	std::cin >> num;
	return num;
}

// 4. 매개변수와 반환값이 모두 없는 경우
void Print() {
	std::cout << "아무것도 없어요" << std::endl;
}

void LocalVariable() {
	// 지역변수
	int num = 1;
	{
		num = 2;

		int num1 = 5; // 중괄호 내에서만 유효
	}
	std::cout << num << std::endl;
	// std::cout << num1 << std::endl; // 안됨
}
int GlobalVariable = 10;

void GlobalVariable() {
	std::cout << GlobalVariable << std::endl;
}

// local global
int main() {
	// 1. 반환값이 있음
	int result;
	result = Sum(1, 2);
	std::cout << "Sum() 함수 호출 결과 : " << result << std::endl;

	// 2. 반환값이 없음
	MyPrint(5);
	LocalVariable();
}