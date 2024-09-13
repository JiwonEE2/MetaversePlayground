/*	240913 과제2
2. 유닛클래스(부모)를 만들고 2개의 자식클래스
// 상속
- Player 클래스(체력, 공격력, ...)
- Monster 클래스(체력, 공격력, ...)
ㄴ get / set
- Player와 Monster의 턴제 게임 만들기
- 종료조건 : 하나가 죽을 때까지
*/
#include<iostream>
using namespace std;

class Unit {
protected:
	string Name;
	int HP;
	int AT;
	int SP;

public:
	string GetName() {
		return Name;
	}
	void SetName(string name) {
		Name = name;
	}
	int GetHP() {
		return HP;
	}
	void SetHP(int hp) {
		HP = hp;
	}
	int GetAT() {
		return AT;
	}
	void SetAT(int at) {
		AT = at;
	}
	void Fight(Unit other) {
		if (this->SP >= other.SP) {
			cout << "\n" << this->Name << "의 공격!\n" << other.Name << "은 " << this->AT << "의 데미지를 입었습니다.\n";
			other.HP -= this->AT;
			cout << this->Name << "의 남은 체력 : " << this->HP << "\n" << other.Name << "의 남은 체력 : " << other.HP;
			cout << "\n" << other.Name << "의 공격!\n" << this->Name << "은 " << other.AT << "의 데미지를 입었습니다.\n";
			this->HP -= other.AT;
			cout << this->Name << "의 남은 체력 : " << this->HP << "\n" << other.Name << "의 남은 체력 : " << other.HP;
			cout << "\n======================================\n";
		}
		else {
			cout << "\n" << other.Name << "의 공격!\n" << this->Name << "은 " << other.AT << "의 데미지를 입었습니다.\n";
			this->HP -= other.AT;
			cout << this->Name << "의 남은 체력 : " << this->HP << "\n" << other.Name << "의 남은 체력 : " << other.HP;
			cout << "\n" << this->Name << "의 공격!\n" << other.Name << "은 " << this->AT << "의 데미지를 입었습니다.\n";
			other.HP -= this->AT;
			cout << this->Name << "의 남은 체력 : " << this->HP << "\n" << other.Name << "의 남은 체력 : " << other.HP;
			cout << "\n======================================\n";
		}
	}
	bool DeathCheck() {
		if (HP <= 0) {
			cout << Name << "는 사망했습니다.";
			return true;
		}
		else {
			return false;
		}
	}
};

class Player :public Unit {
public:
	Player() {
		Name = "Player";
		HP = 10;
		AT = 2;
		SP = 2;
	}
};

class Monster :public Unit {
public:
	Monster() {
		Name = "Monster";
		HP = 5;
		AT = 1;
		SP = 1;
	}
};

int main() {
	Player p;
	Monster m;
	
	while (!p.DeathCheck() && !m.DeathCheck()) {
		p.Fight(m);
		p.DeathCheck();
		m.DeathCheck();

		m.Fight(p);
		p.DeathCheck();
		m.DeathCheck();
	}		
}