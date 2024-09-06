/*
카드게임 (월남뽕)

시작
1. 베팅 가능
2. 최소 베팅 금액 100원
3. 이기면 +*2, 지면 -*2

종료
1. 돈 부족

룰
1. 52장의 카드
2. 한번에 3장씩 17번인가 뽑음
3. 사용된 카드는 다시 사용하지 않는다
4. 마지막에 뽑은 카드의 숫자가 나머지 두 수의 사이에 있으면 승리
5. 모양은 상관없다. 즉 같은 카드는 4장씩 있음
*/

#include<iostream>
using namespace std;

void game() {
	srand(time(NULL));
	
}

int main() {
	int bet, money=10000;
	cout << "~~카드게임 시작~~\n";
	
	while (money>100) {
		cout << "베팅금액 : ";
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
	}
	cout << "파산..";
}