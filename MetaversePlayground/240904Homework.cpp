// 240904 과제
/*
[1]
if문을 사용해서 계절 맞추기
월은 1~12, 이외의 수 입력 시 잘못된 입력!
ex) 7 입력 시 여름! 출력
3~5월 봄
6~8월 여름
9~11월 가을
나머지 겨울

[2] 가위바위보 게임
문자열 입력은 하지 말고 정수로만
1. 플레이어는 입력을 받는다.(1:가위, 2:바위, 3:보)
2. 컴퓨터있음 -> 랜덤하게 가위, 바위, 보 선택
3. 승패를 나타내는 출력하기
*/

#include<iostream>

int main() {
	// 과제1
	std::cout << "============== 과제1 ==============" << std::endl;
	int month;
	std::cout << "몇 월인가요 : ";
	std::cin >> month;
	if (month < 3 || month == 12) {
		std::cout << "겨울입니다." << std::endl;
	}
	else if (month < 6) {
		std::cout << "봄입니다." << std::endl;
	}
	else if (month < 9) {
		std::cout << "여름입니다." << std::endl;
	}
	else if (month < 12) {
		std::cout << "겨울입니다." << std::endl;
	}
	else {
		std::cout << "잘못된 입력입니다. 숫자를 입력하세요" << std::endl;
	}

	// 과제2
	std::cout << "============== 과제2 ==============" << std::endl;
	int input;
	std::cout << "무엇을 내시겠습니까? (1:가위, 2:바위, 3:보)" << std::endl;
	std::cin >> input;

	std::srand(std::time(NULL));
	int computer = std::rand() % 3 + 1; // 1~3까지의 난수 생성
	switch (computer) {
	case 1:
		std::cout << "컴퓨터는 가위를 냈습니다." << std::endl;
		break;
	case 2:
		std::cout << "컴퓨터는 바위를 냈습니다." << std::endl;
		break;
	case 3:
		std::cout << "컴퓨터는 보를 냈습니다." << std::endl;
		break;
	}

	if (input == computer) {
		std::cout << "비겼습니다";
	}
	else if (input - computer == 1 || input - computer == -2) {
		std::cout << "당신은 이겼습니다.";
	}
	else {
		std::cout << "당신은 졌습니다.";
	}
}