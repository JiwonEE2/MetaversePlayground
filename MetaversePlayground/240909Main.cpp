/*
- 열거형
ㄴ 상수집합에 이름을 붙여서 사용하는 데이터 타입
ㄴ 코드의 가독성을 높임
ㄴ 기본적으로 정수타입으로 처리되며 자동으로 0부터 1씩 증가한다
ㄴ 명시적으로 값을 지정할 수 있다

// 구버전(C++11 이전)
enum MyEnum {

};

// 범위 기반 열거형(C++11부터 지원)
// 이름 충돌을 방지. 타입에 대한 안정성을 높임
enum class MyEnumClass {

};

** !! **
c에서는 두 가지 형변환이 주로 사용됨
- 묵시적 형변환(TypeCasting)
ㄴ 컴파일러가 자동으로 수행함
ex)
int a = 5;
float b = 3.14;
float res = a + b;	-> a를 float으로 알아서 바꿔줌

- 명시적 형변환
ㄴ 사용자(프로그래머)가 직접 변환을 명시한다.
int a = 5;
float b = 3.14;
int res = a + (int)b; -> b를 int로 강제로 변환

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
	Location loc = Location::Inven; // Inven이라는 열거 타입은 Location 내부에 있다는 의미
	switch (c)
	{
	case Red:
		cout << "빨간색" << endl;
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
	// 구버전 enum
	// 암묵적으로 형변환 가능
	switch (dirSelect) {
	case Direction::Left:
		cout << "왼쪽으로" << endl;
		break;
	case Direction::Right:
		cout << "오른쪽으로" << endl;
		break;
	case Direction::Up:
		cout << "위로" << endl;
		break;
	case Direction::Down:
		cout << "아래로" << endl;
		break;
	}

	int characterSelect;
	cin >> characterSelect;
	// 범위기반 enum class
	// 암묵적 형변환x, 타입에 대한 안정성 증가
	// -enum class 는 형변환을 해야함
	Character selectCharacter = static_cast<Character>(characterSelect);
	switch (selectCharacter)
	{
	case Character::Knight:
		cout << "성기사 선택" << endl;
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