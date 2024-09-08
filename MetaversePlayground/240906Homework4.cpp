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

int main() {
	// 1. 파산 여부 확인 및 베팅
	int money = 10000;
	cout << "~~카드게임 시작~~\n";
	int bet = MoneyBetMoney(money);


	cout << "파산..";
}