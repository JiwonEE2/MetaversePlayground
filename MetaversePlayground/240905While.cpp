/*
while
- 조건이 참(true)인 동안 특정코드를 반복 실행하기 위한 반복
- 조건이 거짓이 될 때까지 계속 반복
- 일반적으로 반복 횟수가 미리 정해지지 않았거나 특정 조건을 만족할 때까지 반복하는 경우 사용

while (true)
{
	// 위 조건이 만족하면 여기 실행
	// 단, 종료 조건이 있어야만 해당 while이 종료됨
}

do-while
- 조건이 참인지 여부와 관계없이 코드 블럭을 최소 한번은 실행해야할 때 사용
- 다른 반복문과는 다르게 조건을 나중에 검사하는게 특징
do
{
	// 실행할 코드
} while(조건); ----> do 블록이 실행된 후에 조건을 검사
- 조건이 참이면 코드를 다시 실행하고 거짓이면 종료

while과 차이점
- do-while은 조건을 나중에 검사하므로 코드 블럭을 최소 한번은 실행
- while은 조건을 먼저 검사하기 때문에 처음부터 거짓이면 코드 블럭을 한번도 실행하지 않을 수 있다.
*/

#include<iostream>

int main() {
	/*while (true)
	{
		std::cout << "무한루프" << std::endl;
	}*/

	//int num = 0;

	//// num이 10보다 작으면(작을 때까지 반복)
	//while (true) {
	//	if (num == 10)break; // 종료조건
	//	num++; // 1씩 증가
	//	std::cout << num << std::endl;
	//}
	
	/*std::cout << "아무 숫자나 입력해 보세요" << std::endl;
	while (true)
	{
		int inputNum;
		std::cin >> inputNum;

		std::cout << "내가 입력한 숫자 : " << inputNum << std::endl;

		if (inputNum < 1 || inputNum>10)break;
	}*/

	// 1. while을 이용해서 입력한 만큼 출력하기
	// ex)3을 입력하면
	// Hello World Hello World Hello World

	//std::cout << "숫자를 입력해라 : ";
	//int inputNum;
	//std::cin >> inputNum; // 입력용 변수

	//int count = 0; // 카운트용 변수

	//while (count < inputNum) {
	//	std::cout << "입력한 만큼 출력" << std::endl;
	//	count++;
	//}

	int inputNum;
	int total = 0;

	do {
		std::cout << "0보다 큰 숫자를 입력하세요. 종료하려면 0" << std::endl;
		std::cin >> inputNum;
		total += inputNum;
	} while (inputNum!=0); // 0이 입력되면 종료

	std::cout << "합계 : " << total << std::endl;

	int num = 0;

	while (num>0)
	{
		// 조건이 처음부터 false 이기 때문에 실행 x
		std::cout << "여기는 실행되지 않는다" << std::endl;
	}
	do
	{
		std::cout << "여기는 최소 한 번 실행" << std::endl;
	} while (num>0); // 조건은 false지만 do 블록이 먼저 실행된다.

	/*while (true) {
		int num = 0;
		num++;
		std::cout << num << std::endl;
	}*/
}