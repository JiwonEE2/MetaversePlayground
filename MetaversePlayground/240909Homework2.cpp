#include<iostream>
using namespace std;

// ������, ���ھ߱�
// �Լ�, ����ü, ����Ÿ�� ���
// ex) ī�带 ��Ÿ���� ����ü
// ex) ������ ��Ÿ���� ������

int main() {
	int card[52];	// ī�� 52��
	int shape[3];	// ����
	int number[3];

	int dest, sour, temp;

	int betting;
	int money = 10000;

	int useCard = 0;

	srand(time(0));		// time(NULL) �� �ٸ� �ǹ�

	for (int i = 0; i < 500; i++) {
		dest = rand() % 52;
		sour = rand() % 52;
		temp = card[dest];
		card[dest] = card[sour];
		card[sour] = temp;
	}

	while (true)
	{
		for (int i = 0; i < 3; i++) {
			shape[i] = card[i + useCard] / 13;		// ������ (0~3)
			number[i] = card[i + useCard] % 13 + 1;	// ���� (1~13)

			// ���⼭ ������
			switch (shape[i])
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

			// ���� ����
			switch (number[i])
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
				cout << number[i] << " \t";				break;
			}
		}	// end of for

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
		if (number[0]<number[2] && number[2]<number[1] || number[0]>number[2] && number[2]>number[1]) {
			money += betting;
			cout << betting << "ȹ��\n";
		}
		else {
			money -= betting;
			cout << betting << "�Ҿ���\n";
		}
		useCard += 3;
		cout << "���� ����� ī�� �� : " << useCard << "\n";
		if (useCard == 51)break;
	}
}