/*
카드게임 (월남뽕)

시작
1. 베팅 가능
2. 최소 베팅 금액 100원
3. 이기면 +*2, 지면 -*2

종료
1. 돈 부족

룰
1. 48장의 카드
2. 한번에 3장씩 16번 뽑음
3. 사용된 카드는 다시 사용하지 않는다(인덱스 재사용x)
4. 마지막에 뽑은 카드의 숫자가 나머지 두 수의 사이에 있으면 승리
5. 모양은 상관없다. 즉 같은 카드는 4장씩 있음
*/

#include<iostream>
using namespace std;

// 게임하는 함수
void game(int money, int bet) {
	int use[48];
	int count = -1;
	// 인덱스가 중복되지 않게 3번 뽑기
	int index[3];
	for (int i = 0;i < 3;i++) {
		index[i] = pickIndex(use);

	}

	// 마지막 카드가 사이에 있는 지 확인하고 승리 패배 반환하기
	bool isWin = betweenCheck(index);

	// 승패에 따른 소지금 가감 및 텍스트 출력
	winOrLose(isWin, money, bet);
}

// 인덱스 뽑기(카드 x), 중복이면 다시 뽑기, 뽑은 횟수
// 매개변수 : 사용된 인덱스
// 반환 : 뽑은 인덱스
int pickIndex(int use[48]) {
	srand(time(NULL));
	int pick;
	// 뽑기 및 중복 확인, 뽑은 횟수 확인
	bool isSame;
	do {
		pick = rand() % 48;				// 일단 뽑고
		isSame = false;					// 기본값은 false
		for (int i = 0;i < 48;i++) {
			if (use[i] == pick) {		// 중복이면
				isSame = true;			// 중복 표시 후
				break;					// 다시 뽑으러 간다(for문 탈출 -> do while문 다시 시작)
			}							// 중복일 때까지 찾고 중복이 나오지 않으면 false 그대로
		}
	} while (isSame == true);

	// 뽑은 값을 중복에 저장

	return pick;		// 뽑은 값을 반환
}

bool betweenCheck(int index[3]) {
	int card[48] = { 1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,6,6,6,6,7,7,7,7,8,8,8,8,9,9,9,9,10,10,10,10,11,11,11,11,12,12,12,12 };
	int number[3];
	// 뽑은 인덱스(3개)를 카드에 대입
	for (int i = 0;i < 3;i++) {
		number[i] = card[index[i]];
	}

	// 앞의 두 수 작은 순으로 정렬
	if (number[1] > number[2]) {
		int temp = number[1];
		number[1] = number[2];
		number[2] = temp;
	}

	if (number[3] <= number[1] || number[3] >= number[2]) {
		return false;	// 지면 false
	}
	else {
		return true;	// 이기면 true
	}
}

void winOrLose(bool isWin, int money, int bet) {
	if (isWin == true) {
		money += (bet * 2);
		cout << "승리하여 " << bet * 2 << "원을 벌었습니다.\n소지금 : " << money << "\n";
	}
	else {
		money -= (bet * 2);
		cout << "패배하여 " << bet * 2 << "원을 잃었습니다.\n소지금 : " << money << "\n";
	}
}

int main() {
	int bet, money = 10000;
	cout << "~~카드게임 시작~~\n";

	while (money > 100) {
		cout << "소지금 : " << money << "\n베팅금액 : ";
		cin >> bet;
		if (bet > money) {
			cout << "돈이 부족. 다시입력하세요\n";
			continue;
		}
		if (bet < 100) {
			cout << "최소 베팅액은 100원입니다\n";
			continue;
		}
		// 게임 시작
		game(money, bet);
	}
	cout << "파산..";
}