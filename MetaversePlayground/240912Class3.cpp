#include<iostream>
// ������ ��� �ʱ�ȭ ����Ʈ
// ��������� ������ ���� �ȿ��� �ʱ�ȭ�Ǳ� ���� ���� �ʱ�ȭ
// ��������� ���� �����ǰ� ���߿� ���� �����ϴ� �ͺ��� ȿ����
// ������ �Ű����� �ڿ� ����. �ݷ�(:)���� ������ ���� �ʱ�ȭ�� �� �������� ��ǥ�� �����Ͽ� ����

// ���, ���� ��������� �ִٸ�
// �ݵ�� ����ʱ�ȭ����Ʈ�� Ȱ���Ͽ� �ʱ�ȭ�� �����ؾ� �Ѵ�.
// ������ ���������� �Ұ�


using namespace std;

class Exam {

public:
	//const
	const int num;

	// ����
	int& score;

	// ����� ������ ���Ÿ���� �ݵ�� ����ʱ�ȭ����Ʈ�� ���ؼ��� �ʱ�ȭ ����
	/*Exam() {
		num = 1;
		score = 2;
	}*/

	// ����� ����������� �ݵ�� �Ʒ��� ���� ��� �ʱ�ȭ����Ʈ�� Ȱ��
	Exam(int num, int score) :num(num), score(score) {}
};

class Monster {
	string name;
	int mAtk;
	int mHealth;

public:
	// ������ ���� �� ��� �ʱ�ȭ ����Ʈ
	Monster(const string& monsterName, int monsterAtk, int monsterHealth)
		:name(monsterName), mAtk(monsterAtk), mHealth(monsterHealth) {
		// ���⼭ �� �ʿ䰡 ����
	}
};