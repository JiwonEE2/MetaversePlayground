// 240903 과제
/*	
[과제1]
1. 두 수의 입력을 받는다. 
2. 두 수를 입력한 사칙 연산을 한다.
3. 연산 결과를 출력한다.

[과제2]
1. 두 수의 입력을 받는다.
2. 입력한 수를 비교하는 예제를 자유롭게 만들어라
ex) input=3, input=1

[과제3]
온도 변환 만들기
섭씨온도(입력) -> 화씨로 변환하기
(섭씨 * 9/5) + 32 = 화씨

[과제4]
내일 발표, 무작위
메모리 구조(ppt)
*/

#include<iostream>
int main() {
	// 과제1
	std::cout << "=========과제1(사칙연산)=========" << std::endl;
	int num1, num2;
	std::cout << "첫번째 수를 입력하세요 : ";
	std::cin >> num1;
	std::cout << "두번째 수를 입력하세요 : ";
	std::cin >> num2;

	std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
	std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
	std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
	std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;

	// 과제2
	std::cout << "\n=========과제2(비교)=========" << std::endl;
	int num3, num4;
	std::cout << "첫번째 수를 입력하세요 : ";
	std::cin >> num3;
	std::cout << "두번째 수를 입력하세요 : ";
	std::cin >> num4;

	std::cout << num3 << " > " << num4 << " --> " << (num3 > num4) << std::endl;
	std::cout << num3 << " < " << num4 << " --> " << (num3 < num4) << std::endl;
	std::cout << num3 << " >= " << num4 << " --> " << (num3 >= num4) << std::endl;
	std::cout << num3 << " <= " << num4 << " --> " << (num3 <= num4) << std::endl;
	std::cout << num3 << " == " << num4 << " --> " << (num3 == num4) << std::endl;
	std::cout << num3 << " != " << num4 << " --> " << (num3 != num4) << std::endl;

	// 과제3
	std::cout << "\n=========과제3(온도변환)=========" << std::endl;
	int ctemp;
	std::cout << "섭씨 온도를 입력하세요 : ";
	std::cin >> ctemp;
	int ftemp;
	ftemp = (ctemp * 9 / 5) + 32;
	std::cout << ctemp << "ºC는 화씨온도로 " << ftemp << "ºF입니다." << std::endl;
}