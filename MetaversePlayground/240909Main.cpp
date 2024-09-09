/*
- ������
�� ������տ� �̸��� �ٿ��� ����ϴ� ������ Ÿ��
�� �ڵ��� �������� ����
�� �⺻������ ����Ÿ������ ó���Ǹ� �ڵ����� 0���� 1�� �����Ѵ�
�� ��������� ���� ������ �� �ִ�

// ������(C++11 ����)
enum MyEnum {

};

// ���� ��� ������(C++11���� ����)
// �̸� �浹�� ����. Ÿ�Կ� ���� �������� ����
enum class MyEnumClass {

};

** !! **
c������ �� ���� ����ȯ�� �ַ� ����
- ������ ����ȯ(TypeCasting)
�� �����Ϸ��� �ڵ����� ������
ex)
int a = 5;
float b = 3.14;
float res = a + b;	-> a�� float���� �˾Ƽ� �ٲ���

- ����� ����ȯ
�� �����(���α׷���)�� ���� ��ȯ�� ����Ѵ�.
int a = 5;
float b = 3.14;
int res = a + (int)b; -> b�� int�� ������ ��ȯ

c++
ex)
int a = 10;
- static_case<double>(a)
*/

#include<iostream>
using namespace std;

enum Color {
	Red,		// 0
	Green,		// 1
	Black		// 2
};

enum Direction {
	Left = 1,	// 1
	Up,			// 2
	Right = 5,	// 5
	Down		// 6
};

enum class Location {
	Inven,
	Town,
	Shop
};

enum class Character {
	Knight = 1,
	Archer,
	Mage,
	None
};

Character Getcharacter(int n) {
	switch (n)
	{
	case 1: return Character::Knight;
	case 2: return Character::Archer;
	case 3: return Character::Mage;
	}
}

int main() {
	Color c = Red;
	cout << c << endl;
	Location loc = Location::Inven; // Inven�̶�� ���� Ÿ���� Location ���ο� �ִٴ� �ǹ�
	switch (c)
	{
	case Red:
		cout << "������" << endl;
		break;
	case Green:
		break;
	case Black:
		break;
	default:
		break;
	}

	int dirSelect;
	cin >> dirSelect;
	// ������ enum
	// �Ϲ������� ����ȯ ����
	switch (dirSelect) {
	case Direction::Left:
		cout << "��������" << endl;
		break;
	case Direction::Right:
		cout << "����������" << endl;
		break;
	case Direction::Up:
		cout << "����" << endl;
		break;
	case Direction::Down:
		cout << "�Ʒ���" << endl;
		break;
	}

	int characterSelect;
	cin >> characterSelect;
	// ������� enum class
	// �Ϲ��� ����ȯx, Ÿ�Կ� ���� ������ ����
	// -enum class �� ����ȯ�� �ؾ���
	Character selectCharacter = static_cast<Character>(characterSelect);
	switch (selectCharacter)
	{
	case Character::Knight:
		cout << "����� ����" << endl;
		break;
	case Character::Archer:
		break;
	case Character::Mage:
		break;
	default:
		break;
	}

	switch (loc)
	{
	case Location::Inven:
		break;
	case Location::Town:
		break;
	case Location::Shop:
		break;
	default:
		break;
	}

	int input;
	cin >> input;
	Character ch = Character::None;
	ch = Getcharacter(input);

	switch (ch)
	{
	case Character::Knight:
		break;
	case Character::Archer:
		break;
	case Character::Mage:
		break;
	case Character::None:
		break;
	default:
		break;
	}
}