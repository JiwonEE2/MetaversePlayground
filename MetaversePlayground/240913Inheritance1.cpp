#include<iostream>
using namespace std;
/*
=========================================================
���
- ������ ������ �� ������
- ���� Ŭ����(���, �θ�)�� �����ؼ� ���ο� Ŭ���� ����
�� �θ� : ���� �Ӽ��� �޼��带 ����
�� �ڽ� : ���(�θ�)Ŭ������ ��ӹ޾� ���ο� �Ӽ��� �޼��带 �߰��ϰų� ���� ���� ������

�θ� -> �ڽ�
- Ŭ���� ���� ��� ���踦 ���� ���� ������ ����� ���� Ŭ������ ���� �־� �ٸ� Ŭ������ Ȯ���� �� �ְ� �ϴ� ���� ����

���� Ŭ�������� ���� ����� �Ǵ� ������ ���� �ڵ带 ������ �ִٸ�
�ش� �ڵ带 ���� Ŭ������ ���� ���� ���� ����ϴ� ���� ����

ex) ����Ŭ����
- �̸�, ���ݷ�, ������...
- �����ϱ�, ��ų����, ��������... �ൿ

ex) ����Ŭ����
- �̸�, ���ݷ�, ������...
- �����ϱ�, ��ų����, ��������... �ൿ
=========================================================
*/

/* ��� ���� �ʾ��� ��
// ������ Ŭ����
class Warrior {
	string name;
	int health;

public:
	Warrior(const string& n, const int h) :name(n), health(h) {}
	void Attack() {
		cout << name << "��(��) ���� �ֵθ���" << endl;
	}
	void TakeDamage(const int damage) {
		health -= damage;
		cout << name << "��(��) " << damage << "��ŭ ����. ü�� : " << health << endl;
	}
};

class Mage {
	string name;
	int health;

public:
	Mage(const string& n, const int h) :name(n), health(h) {}
	void Skill() {
		cout << name << "��(��) ���̽��� �߻�" << endl;
	}
	void TakeDamage(const int damage) {
		health -= damage;
		cout << name << "��(��) " << damage << "��ŭ ����. ü�� : " << health << endl;
	}
};
*/

// �������
// �θ�
class Character {
protected:
	string name;
	int health;

public:
	Character(const string& n, const int h) :name(n), health(h) {
		cout << "�θ� Ŭ���� Character ������ ȣ��" << endl;
	}
	~Character() {
		cout << "�θ� Ŭ���� Character �Ҹ��� ȣ��" << endl;
	}
	void TakeDamage(int damage) {
		health -= damage;
		cout << name << "��(��) " << damage << "�� ���ظ� ����. ���� ü�� : " << health << endl;
	}
};

// �Ļ�Ŭ����
class Warrior :public Character {
public:
	Warrior(const string& n, const int h) :Character(n, h) {
		cout << "�ڽ� Ŭ���� Warrior ������ ȣ��" << endl;
	}
	~Warrior() {
		cout << "�ڽ� Ŭ���� Warrior �Ҹ��� ȣ��" << endl;
	}
	void Attack() {
		cout << name << "��(��) ���� �ֵθ���" << endl;
	}
};

class Mage :public Character {
public:
	Mage(const string& n, const int h) :Character(n, h) {
		cout << "�ڽ� Ŭ���� Mage ������ ȣ��" << endl;
	}
	~Mage() {
		cout << "�ڽ� Ŭ���� Mage �Ҹ��� ȣ��" << endl;
	}
	void Skill() {
		cout << name << "��(��) ���̽��� �߻�" << endl;
	}
};

int main() {
	Warrior* w = new Warrior("�丣", 100);
	w->Attack();
	w->TakeDamage(10);

	Mage* m = new Mage("������", 90);
	m->Skill();
	m->TakeDamage(20);

	delete w;
	delete m;
	// �θ�� ȣ���� �ʿ䵵 ����, �Ҹ���ص� �ڵ� �Ҹ�
}