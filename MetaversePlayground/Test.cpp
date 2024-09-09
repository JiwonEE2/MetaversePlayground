//과제
//월남뽕, 숫자야구
//함수, 구조체, 열거타입... 기타등등...
//
//ex) 카드를 나타내는 구조체
//ex) 문양을 나타내는 열거형

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