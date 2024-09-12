#include<iostream>
// ������ ��� �ʱ�ȭ ����Ʈ
// ��������� ������ ���� �ȿ��� �ʱ�ȭ�Ǳ� ���� ���� �ʱ�ȭ
// ��������� ���� �����ǰ� ���߿� ���� �����ϴ� �ͺ��� ȿ����
// ������ �Ű����� �ڿ� ����. �ݷ�(:)���� ������ ���� �ʱ�ȭ�� �� �������� ��ǥ�� �����Ͽ� ����

// ���, ���� ��������� �ִٸ�
// �ݵ�� ����ʱ�ȭ����Ʈ�� Ȱ���Ͽ� �ʱ�ȭ�� �����ؾ� �Ѵ�.
// ������ ���������� �Ұ�

// destructor
// ��ü�� �Ҹ�� �� �ڵ����� ȣ��Ǵ� Ư���� ����Լ�
// ���� �޸� �Ҵ� ������ ��
// �Ű������� ���� �� ����. ��ȯ�� x, �����ε� �Ұ�

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

class MyClass
{
public:
	MyClass(int size);
	~MyClass();

private:
	int* data;
};

// ������
MyClass::MyClass(int size)
{
	data = new int[size];
	cout << "���� ������ ����" << endl;
}

// �Ҹ���
MyClass::~MyClass()
{
	delete[] data;	// �ݳ�. ���� �迭 �Ҵ� �� ���ȣ[] �ʿ�.
	data = nullptr;
	cout << "���� �Ҹ��� ����" << endl;
}

int main() {
	MyClass* m = new MyClass(10);

	delete m;

	int MonsterCount;
	cin >> MonsterCount;
	//Monster* mon = new Monster[MonsterCount];
}