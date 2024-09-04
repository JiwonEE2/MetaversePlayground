/*
if
- 조건문이라고도 하며, 프로그램의 실행 흐름을 제어하는 데 사용
- 조건문은 주어진 조건이 true, false인지에 따라 코드 블록을 실행하게 된다.


if (// 여기가 참이라면(조건이)) {
		// 여기를 실행하라
}
1. if문은 갯수 제한이 없다.(연속적으로 사용 가능)
2. if문은 조건식을 전부 검사한다.
3. else는 위에 있는 if문이 거짓이면 실행한다.
4. else는 단독으로 사용이 불가능하고 연속적인 사용이 불가능하다.
5. else if는 if~if문과는 다르게 조건 만족 시 그 아래에 있는 코드(조건식)를 검사하지 않는다.
6. if문은 중첩 가능
*/

#include<iostream>

int main() {
	//if (true/*조건*/) // 여기가 참이라면
	//{
	//	// 실행
	//	// 조건이 참일 때 실행되는 코드
	//}

	if (true)
	{
		std::cout << "조건이 참이면 여기가 실행된다" << std::endl;
	}

	int num = 10;

	// 만약 num이 10보다 같거나 크다면
	if (num < 10) {
		std::cout << "첫번째 if문 실행" << std::endl;
	}
	// OK
	// 위 조건이 거짓이고 아래와 같은 조건이라면
	else if (num == 10) {
		std::cout << "두번째 if문 실행" << std::endl;
	}
	// OK
	else if (num <= 10) {
		std::cout << "세번째 if문 실행" << std::endl;
	}
	else {
		std::cout << "위 조건이 전부 만족하지 않는다면 else를 실행한다." << std::endl;
	}

	int num1 = 50;
	// 만약에 조건이 참이면
	if (num1==51)
	{
		std::cout << "num1이 51이면 실행" << std::endl;
	}
	else
	{
		std::cout << "위 조건이 거짓이면 여기를 실행" << std::endl;

		// 위에 있는 조건이 거짓이면 여기를 실행
	}

	if (true) {

	}
	else if (true/*조건*/) {

	}
	else if (true/*조건*/) {

	}

	int input;
	std::cin >> input;
	
	// 입력한 값을 2로 나눈 나머지가 0이라면
	if ((input % 2) == 0) {
		std::cout << " 짝수 " << std::endl;
	}
	/*if ((input % 2) != 0) {

	}
	else {

	}*/
	
	int input1;
	std::cin >> input1;

	if (input1 > 0) // 입력한 값이 양수
	{
		// 짝수라면
		if (input % 2 == 0) {
			// 여기까지 왔다라는 건 입력한 값이 양수 && 짝수
			if (true) {

			}
		}
		else {
			// 홀수

		}
	}

	// 몬스터와 플레이어 체력 설정
	int playerHealth = 100;
	int monsterHealth = 100;

	// 몬스터 공격력 셋팅
	int monsterAttack = 10;

	// 이건 입력으로 처리
	int playerAttack = 0;

	std::cout << "전방에 고블린이 나왔다" << std::endl;

	// 먼저 때려볼까?
	// std::cout << "플레이어가 고블린을 공격" << std::endl;

	// 때려야 하는데.. 고블린의 체력이 0 미만이면 안되니까
	if (monsterHealth > 0) {
		std::cout << "플레이어의 공격력을 입력하세요 : ";
		std::cin >> playerAttack;

		std::cout << "고블린이 공격한다" << std::endl;
		// 플레이어 체력 깎고
		playerHealth -= monsterAttack;
		// 고블린 체력 깎고
		monsterHealth -= playerAttack;

		// 만약 플레이어가 살아 있다면
		if (playerHealth > 0) {
			std::cout << "플레이어의 남은 체력 : " << playerHealth << std::endl;
			std::cout << "고블린의 남은 체력 : " << monsterHealth << std::endl;
		}
		else {
			std::cout << "플레이어가 죽음" << std::endl;
		}
	}
	else {
		std::cout << "고블린이 죽었다." << std::endl;
	}
}