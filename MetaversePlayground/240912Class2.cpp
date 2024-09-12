/*
constructor
- ��ü�� ������ �� �ڵ����� ȣ��Ǵ� Ư���� ����Լ�
- ��ü�� �ʱ�ȭ�� ����ϰ� Ŭ������ ������ �̸��� ������ ��ȯ���� ����
- ������ �⺻������, �Ű������� �ִ� ������, ��������� ���� �ִ�.

1. �⺻������
- �Ű������� ���� ������. ��������� �������� �ʴ´ٸ� �����Ϸ��� �ڵ����� ����


*/
#include<iostream>
using namespace std;
class Player {
private:
	string mName;
	int mAtk;
	int mDef;
	
public:
	// �⺻������
	Player() {
		mName = "ȫ�浿";
		mAtk = 10;
		mDef = 200;
	}

	// �Ű������� �ִ� ������
	Player(const string& playerName, const int playerAtk, const int playerDef) {
		mName = playerName;
		mAtk = playerAtk;
		mDef = playerDef;
	}

	void PrintInfo()const;
};

void Player::PrintInfo() const
{
	cout << "�̸� : " << mName << endl;
	cout << "���ݷ� : " << mAtk << endl;
	cout << "���� : " << mDef << endl;
}

int main() {
	// ����
	// player p;

	// ����
	Player* player = new Player;	// ��������� ������
	player->PrintInfo();
	Player* player1 = new Player("ī����", 10, 20);
	player1->PrintInfo();

	delete player;
	delete player1;

	player = nullptr;
	player1 = nullptr;
}