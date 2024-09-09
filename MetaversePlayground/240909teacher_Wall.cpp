#include<iostream>

using namespace std;

int main()
{
	int card[52]; //카드 52장
	int shape[3];  //문양
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
			shape[i] = card[i + useCard] / 13;  //문양계산(0~3)
			number[i] = card[i + useCard] % 13 + 1; //(숫자 1~13)
			//◆♠♥♣ 여기서 모양 세팅
			switch (shape[i])
			{
			case 0:cout << "◆"; break;
			case 1:cout << "♠"; break;
			case 2:cout << "♥"; break;
			case 3:cout << "♣"; break;
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

		cout << "내가 가진 시드머니: " << money << endl;
		cout << "목숨값을 배팅하세요: ";
		cin >> betting;

		if (money < 1000)
		{
			cout << "집으로 돌아가라" << endl;
			break;
		}
		if (betting < 1000 || betting > money) continue;

		//보여지는 카드가 2장에 A<B, A>B
		//A<C<B, A>C>B
		if (number[0] < number[2] && number[2] < number[1] ||
			number[0] > number[2] && number[2] > number[1])
		{
			money += betting;
			cout << betting << "획득" << endl;
		}
		else
		{
			money -= betting;
			cout << betting << "잃었다." << endl;
		}
		useCard += 3;
		cout << "현재 사용한 카드 수: " << endl;
		if (useCard == 51)break;
	}

}