#include<iostream>

using namespace std;

int main()
{
	int card[52]; //ī�� 52��
	int shape[3];  //����
	int number[3];

	int dest, sour, temp;

	int betting;
	int money = 10000;

	int useCard = 0;

	srand(time(0));

	for (int i = 0; i < 52; i++)
	{
		card[i] = i;
	}
	for (int i = 0; i < 500; i++)
	{
		dest = rand() % 52;
		sour = rand() % 52;
		temp = card[dest];
		card[dest] = card[sour];
		card[sour] = temp;
	}

	while (true)
	{
		for (int i = 0; i < 3; i++)
		{
			shape[i] = card[i + useCard] / 13;  //������(0~3)
			number[i] = card[i + useCard] % 13 + 1; //(���� 1~13)
			//�ߢ����� ���⼭ ��� ����
			switch (shape[i])
			{
			case 0:cout << "��"; break;
			case 1:cout << "��"; break;
			case 2:cout << "��"; break;
			case 3:cout << "��"; break;
			}
			switch (number[i])
			{
			case 1: cout << "A \t"; break;
			case 11: cout << "J \t"; break;
			case 12: cout << "Q \t"; break;
			case 13: cout << "K \t"; break;
			default:cout << number[i] << " \t"; break;
			}
		}//end of for

		cout << "���� ���� �õ�Ӵ�: " << money << endl;
		cout << "������� �����ϼ���: ";
		cin >> betting;

		if (money < 1000)
		{
			cout << "������ ���ư���" << endl;
			break;
		}
		if (betting < 1000 || betting > money) continue;

		//�������� ī�尡 2�忡 A<B, A>B
		//A<C<B, A>C>B
		if (number[0] < number[2] && number[2] < number[1] ||
			number[0] > number[2] && number[2] > number[1])
		{
			money += betting;
			cout << betting << "ȹ��" << endl;
		}
		else
		{
			money -= betting;
			cout << betting << "�Ҿ���." << endl;
		}
		useCard += 3;
		cout << "���� ����� ī�� ��: " << endl;
		if (useCard == 51)break;
	}

}