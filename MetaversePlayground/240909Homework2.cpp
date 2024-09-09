#include<iostream>
using namespace std;

// ������, ���ھ߱�
// �Լ�, ����ü, ����Ÿ�� ���
// ex) ī�带 ��Ÿ���� ����ü
// ex) ������ ��Ÿ���� ������

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

		// 500�� ����
		temp = card[dest];
		card[dest] = card[sour];
		card[sour] = temp;
	}
}

void DisplayCard(Card c) {
	switch (c.s)
	{
	case 0:
		cout << "��";
		break;
	case 1:
		cout << "��";
		break;
	case 2:
		cout << "��";
		break;
	case 3:
		cout << "��";
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

	srand(time(0));		// time(NULL) �� �ٸ� �ǹ�

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
		cout << "������ : " << money << endl;
		cout << "���þ� : ";
		cin >> betting;

		if (money < 1000) {
			cout << "������ ����" << endl;
			break;
		}

		if (betting<1000 || betting>money)continue;

		// �������� ī�尡 2�忡 A<B, A>B
		// A<C<B, A>C>B
		if (card[useCard].number<card[2 + useCard].number && card[2 + useCard].number<card[1 + useCard].number || card[useCard].number>card[2 + useCard].number && card[2 + useCard].number>card[1 + useCard].number) {
			money += betting;
			cout << betting << "ȹ��\n";
		}
		else {
			money -= betting;
			cout << betting << "�Ҿ���\n";
		}
		cout << "���� ����� ī�� �� : " << useCard << "\n";
		if (useCard == 51)break;
	}
}