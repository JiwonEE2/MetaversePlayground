#include<iostream>
using namespace std;

// 월남뽕, 숫자야구
// 함수, 구조체, 열거타입 사용
// ex) 카드를 나타내는 구조체
// ex) 문양을 나타내는 열거형

enum Shape {
	Spade, Clover, Diamond, Heart
};

struct Card {
	Shape s;
	int number;
};

void CardMake(Card card[]) {
	for (int i = 0; i < 52; i++) {
		if (i < 13) {
			card[i].s = Spade;
			card[i].number = i + 1;
		}
		else if (i < 26) {
			card[i].s = Clover;
			card[i].number = i + 1 - 13;
		}
		else if (i < 39) {
			card[i].s = Heart;
			card[i].number = i + 1 - 26;
		}
		else {
			card[i].s = Diamond;
			card[i].number = i + 1 - 39;
		}
	}
}

void ShuffleCard(Card card[]) {
	int dest, sour;

	Card temp;
	for (int i = 0; i < 500; i++) {
		dest = rand() % 52;
		sour = rand() % 52;

		// 500번 셔플
		temp = card[dest];
		card[dest] = card[sour];
		card[sour] = temp;
	}
}

void DisplayCard(Card c) {
	switch (c.s)
	{
	case 0:
		cout << "♠";
		break;
	case 1:
		cout << "♣";
		break;
	case 2:
		cout << "◆";
		break;
	case 3:
		cout << "♥";
		break;
	}

	switch (c.number)
	{
	case 1:
		cout << "A \t";
		break;
	case 11:
		cout << "J \t";
		break;
	case 12:
		cout << "Q \t";
		break;
	case 13:
		cout << "K \t";
		break;
	default:
		cout << c.number << " \t";
		break;
	}
}

int main() {
	Card card[52];
	// 카드 만드는 함수
	CardMake(card);

	// 시간에 대해 랜덤 세팅
	srand(time(0));		// time(NULL) 과 다른 의미

	// 카드 셔플 함수
	ShuffleCard(card);

	int betting;
	int money = 10000;

	int useCard = 0;

	while (true)
	{
		// 3개의 카드 뽑기. 마지막카드는 숨기기!
		for (int i = 0; i < 3; i++) {
			Card c = card[i + useCard];
			if (i < 2) {
				DisplayCard(c);
			}
		}
		useCard += 3;

		// 베팅 시작
		cout << "\n소지금 : " << money;
		cout << "\n베팅액 : ";
		cin >> betting;

		if (money < 1000) {
			cout << "소지금 부족" << endl;
			break;
		}

		if (betting<1000 || betting>money) {
			continue;
		}

		// 보여지는 카드가 2장에 A<B, A>B
		// A<C<B, A>C>B
		int first = card[useCard - 3].number;
		int second = card[useCard - 2].number;
		int third = card[useCard - 1].number;

		if (second < third && third < first || first < third && third < second) {
			money += betting;
			cout << betting << "획득\n";
		}
		else {
			money -= betting;
			cout << betting << "잃었다\n";
		}
		cout << "현재 사용한 카드 수 : " << useCard << "\n";
		if (useCard == 51)break;
	}	
}
