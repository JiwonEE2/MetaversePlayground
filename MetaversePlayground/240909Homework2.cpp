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
		cout << "A \n";
		break;
	case 11:
		cout << "J \n";
		break;
	case 12:
		cout << "Q \n";
		break;
	case 13:
		cout << "K \n";
		break;
	default:
		cout << c.number << " \t";				
		break;
	}
}

int main() {
	Card card[52];

	srand(time(0));		// time(NULL) 과 다른 의미

	ShuffleCard(card);	

	int betting;
	int money = 10000;

	int useCard = 0;	

	while (true)
	{
		
		for (int i = 0; i < 3; i++) {
			DisplayCard(card[i + useCard]);			
		}

		useCard += 3;
		cout << "소지금 : " << money << endl;
		cout << "베팅액 : ";
		cin >> betting;

		if (money < 1000) {
			cout << "소지금 부족" << endl;
			break;
		}

		if (betting<1000 || betting>money)continue;

		// 보여지는 카드가 2장에 A<B, A>B
		// A<C<B, A>C>B
		if (card[useCard].number<card[2 + useCard].number && card[2 + useCard].number<card[1 + useCard].number || card[useCard].number>card[2 + useCard].number && card[2 + useCard].number>card[1 + useCard].number) {
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