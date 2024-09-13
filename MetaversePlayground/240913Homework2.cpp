/*	240913 ����2
2. ����Ŭ����(�θ�)�� ����� 2���� �ڽ�Ŭ����
// ���
- Player Ŭ����(ü��, ���ݷ�, ...)
- Monster Ŭ����(ü��, ���ݷ�, ...)
�� get / set
- Player�� Monster�� ���� ���� �����
- �������� : �ϳ��� ���� ������
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
			cout << "\n" << this->Name << "�� ����!\n" << other.Name << "�� " << this->AT << "�� �������� �Ծ����ϴ�.\n";
			other.HP -= this->AT;
			cout << this->Name << "�� ���� ü�� : " << this->HP << "\n" << other.Name << "�� ���� ü�� : " << other.HP;
			cout << "\n" << other.Name << "�� ����!\n" << this->Name << "�� " << other.AT << "�� �������� �Ծ����ϴ�.\n";
			this->HP -= other.AT;
			cout << this->Name << "�� ���� ü�� : " << this->HP << "\n" << other.Name << "�� ���� ü�� : " << other.HP;
			cout << "\n======================================\n";
		}
		else {
			cout << "\n" << other.Name << "�� ����!\n" << this->Name << "�� " << other.AT << "�� �������� �Ծ����ϴ�.\n";
			this->HP -= other.AT;
			cout << this->Name << "�� ���� ü�� : " << this->HP << "\n" << other.Name << "�� ���� ü�� : " << other.HP;
			cout << "\n" << this->Name << "�� ����!\n" << other.Name << "�� " << this->AT << "�� �������� �Ծ����ϴ�.\n";
			other.HP -= this->AT;
			cout << this->Name << "�� ���� ü�� : " << this->HP << "\n" << other.Name << "�� ���� ü�� : " << other.HP;
			cout << "\n======================================\n";
		}
	}
	bool DeathCheck() {
		if (HP <= 0) {
			cout << Name << "�� ����߽��ϴ�.";
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