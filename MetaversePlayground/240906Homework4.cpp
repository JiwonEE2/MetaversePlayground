#include<iostream>
using namespace std;
// 베팅 금액 확인 함수
// 매개변수 : 사용자의 소지금
int MoneyBetMoney(int money) {
	while (money > 100) {
		cout << "소지금 : " << money << "\n베팅금액 : ";
		int bet;
		cin >> bet;
		if (bet > money) {
			cout << "돈이 부족. 다시입력하세요\n";
			continue;
		}
		else if (bet < 100) {
			cout << "최소 베팅액은 100원입니다\n";
			continue;
		}
		return bet;
	}
}

void CardPick() {
	cout << "카드를 뽑았습니다.\n";
	// 인덱스 뽑기
	int index = rand() % 48;
	cout << "뽑힌 인덱스 : " << index << "\n";
}

int main() {
	// [게임흐름]
	// 1. 파산 여부와 횟수 확인
	// 2. 3개의 카드 뽑기
	// 3. 베팅
	// 4. 결과 출력 및 소지금 수정
	// 위를 반복
	// 5. 게임 종료

	srand(time(NULL));
	int money = 10000;
	int minMoney = 100;
	int count = 0;
	cout << "~~월남뽕 시작~~\n";

	// 1. 소지금과 횟수 확인
	while (money >= minMoney || count <= 16) {
		// 2. 카드 3개 뽑기
		for (int i = 0;i < 3;i++) {
			CardPick();
		}
		int bet = MoneyBetMoney(money);
	}

	// 5. 게임종료
	cout << "종료..";	
}