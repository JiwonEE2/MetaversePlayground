//����
//������, ���ھ߱�
//�Լ�, ����ü, ����Ÿ��... ��Ÿ���...
//
//ex) ī�带 ��Ÿ���� ����ü
//ex) ������ ��Ÿ���� ������

#include<iostream>
using namespace std;

enum Shape
{
	Dia, heart, Spade, Clover
};

struct Card
{
	Shape s;
	int number;
};

void shuffleCard(Card card[])
{
	int dest, sour;

	Card temp;
	for (size_t i = 0; i < 500; i++)
	{
		dest = rand() % 52;
		sour = rand() % 52;

		temp = cards[dest];
		cards[dest] = cards[sour];
		cards[sour] = cards[dest];
	}
}

void display(Card c)
{
	switch ~
}