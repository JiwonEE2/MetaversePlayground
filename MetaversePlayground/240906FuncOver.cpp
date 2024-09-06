/*
함수 오버로딩
- 동일한 함수 이름을 사용하여 매개변수의 타입, 갯수, 순서를 다르게 정의하는 것
- 가독성 및 편의성 향상
ㄴ 비슷한 작업을 수행하는 여러 함수가 있을 때 각 함수에 다른 이름을 부여하는 대신 함수 오버로딩을 사용하면
코드의 가독성이 향상되며 사용자는 하나의 함수 이름으로 다양한 형태의 함수를 호출 가능
- 일관성 유지
ㄴ 비슷한 작업을 함수들이 많은 경우 함수 오버로딩을 사용하면 각 함수들이 동일한 이름을 가지고 있어서
코드의 일관성을 유지

- 중복 코드 제거
ㄴ 여러 함수 간의 공통된 기능이 있을 때 중복 코드를 제거하고 코드의 재사용성을 높일 수 있다.

** 함수 오버로딩 성립 조건 **
1. 함수 이름이 동일해야 함
2. 리턴 타입은 고려 대상이 아님
3. 매개변수의 데이터 다입이 다르거나 갯수가 달라야 한다.
*/

void PrintValue(int value) {
	std::cout << "정수 값 : " << value << std::endl;
}

void PrintValue(double value) {
	std::cout << "실수 값 : " << value << std::endl;
}

int Sum(int a, int b) {

}
double Sum1(double a, double b) {
	return a + b;
}

int Multi(int left, int right) {
	return left * right;
}

float Multi(float left, float right) {
	return left * right;
}

double Multi(double left, double right) {
	return left * right;
}

#include<iostream>

int main() {
	PrintValue(10);		// 매개변수가 정수 타입인 함수를 호출
	PrintValue(10.5);	// 매개변수가 실수 타입인 함수를 호출
	std::cout << Multi(5, 3);
	std::cout << Multi(5.1, 3.2);
}