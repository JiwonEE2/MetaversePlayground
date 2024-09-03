/*
연산자(operater)
======================================================================

- 산술연산자( + - * / % )
ㄴ + : 두 값을 더한다. ex) a + b
ㄴ - : 두 값에서 하나의 값을 뺀다. ex) a - b
ㄴ * : 두 값을 곱한다. ex) a * b
ㄴ / : 첫번째 값을 두번째 값으로 나눈다. ex) a / b
ㄴ % : 첫번째 값을 두번째 값으로 나눈 나머지. ex) a % b

======================================================================

- 증감 연산자( ++ -- )
ㄴ 증감 연산자는 ++, -- 기호를 이용하는 연산자. 피연산자의 값을 1증가 또는 감소시킨다.
ㄴ ++a : 선 증가 후 연산 (먼저 증가 후 그 다음 연산)
ㄴ a++ : 선 연산 후 증가
ㄴ --a : 선 감소 후 연산
ㄴ a-- : 선 연산 후 감소

** 전위연산(앞에 연산자)과 후위연산(뒤에 연산자)**
- 증감 연산자의 위치가 변수의 앞에 위치하는 표현을 전위, 뒤에 위치하는 표현을 후위

======================================================================

- 관계 연산자 ( > < >= <= == != )
a > b  --> 피연산자 a가 피연산자 b보다 크다.
a < b  --> 피연산자 a가 피연산자 b보다 작다.
a >= b --> 피연산자 a가 피연산자 b보다 크거나 같다.
a <= b --> 피연산자 a가 피연산자 b보다 작거나 같다.
a == b --> 피연산자 a가 피연산자 b와 같다.
a != b --> 피연산자 a가 피연산자 b와 같지 않다.

======================================================================
*/

#include<iostream>
int main() {
	int a = 10;
	int b = 3;
	std::cout << "====산술 연산자====" << std::endl;
	std::cout << "a + b = " << a + b << std::endl; // 13
	std::cout << "a - b = " << a - b << std::endl; // 7
	std::cout << "a * b = " << a * b << std::endl; // 30
	std::cout << "a / b = " << a / b << std::endl; // 3
	std::cout << "a % b = " << a % b << std::endl; // 1

	std::cout << std::endl;
	std::cout << "====증감 연산자====" << std::endl;
	int num = 10;
	std::cout << "num의 값 : " << num << std::endl; // 10
	num++; // num = num + 1 과 같다 (= : 대입 연산자)
	std::cout << "num++ 후 num의 값 : " << num << std::endl; // 11
	++num;
	std::cout << "++num 후 num의 값 : " << num << std::endl; // 12
	num--;
	std::cout << "num-- 후 num의 값 : " << num << std::endl; // 11
	--num;
	std::cout << "--num 후 num의 값 : " << num << std::endl; // 10

	int num1 = 10;
	int num2 = 20;
	int c;
	int d;

	c = ++num1; // 전위 방식, 선 증가 후 연산
	std::cout << "변수 c의 값 : " << c << ", 변수 num1의 값 : " << num1 << std::endl; // 11, 11
	d = num2++; // 후위 방식, 선 연산 후 증가(num2에 저장되어 있는 20을 먼저 대입하고 증가)
	std::cout << "변수 d의 값 : " << d << ", 변수 num2의 값 : " << num2 << std::endl; // 20, 21

	std::cout << "====관계 연산자====" << std::endl;
	int num3 = 1;
	int num4 = 2;

	int result;
	int result1;
	int result2;
	int result3;

	result = (num3 > num4); // num3이 num4보다 큰가?
	result1 = (num3 <= num4);
	result2 = (num3 == num4);
	result3 = (num3 != num4);

	std::cout << "result  결과 : " << result << std::endl; // 0 --> false
	std::cout << "result1 결과 : " << result1 << std::endl; // 1 --> true
	std::cout << "result2 결과 : " << result2 << std::endl; // 0
	std::cout << "result3 결과 : " << result3 << std::endl; // 1

	bool bClick = 1;
	std::cout << bClick << std::endl;
}