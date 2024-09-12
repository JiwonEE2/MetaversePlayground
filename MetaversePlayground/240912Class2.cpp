/*
constructor
- 객체가 생성될 때 자동으로 호출되는 특별한 멤버함수
- 객체의 초기화를 담당하고 클래스와 동일한 이름을 가지며 반환형이 없다
- 생성자 기본생성자, 매개변수가 있는 생성자, 복사생성자 등이 있다.

1. 기본생성자
- 매개변수가 없는 생성자. 명시적으로 정의하지 않는다면 컴파일러가 자동으로 제공


*/
#include<iostream>
using namespace std;
class Player {
private:
	string mName;
	int mAtk;
	int mDef;
	
public:
	// 기본생성자
	Player() {
		mName = "홍길동";
		mAtk = 10;
		mDef = 200;
	}

	// 매개변수가 있는 생성자
	Player(const string& playerName, const int playerAtk, const int playerDef) {
		mName = playerName;
		mAtk = playerAtk;
		mDef = playerDef;
	}

	void PrintInfo()const;
};

void Player::PrintInfo() const
{
	cout << "이름 : " << mName << endl;
	cout << "공격력 : " << mAtk << endl;
	cout << "방어력 : " << mDef << endl;
}

int main() {
	// 정적
	// player p;

	// 동적
	Player* player = new Player;	// 명시적으로 생성자
	player->PrintInfo();
	Player* player1 = new Player("카리나", 10, 20);
	player1->PrintInfo();

	delete player;
	delete player1;

	player = nullptr;
	player1 = nullptr;
}