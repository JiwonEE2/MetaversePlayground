/*
==================================================
class
- ��ü ���� ����� ����Ʈ���� ���迡 �־ ���� ������ �����ϴ� ������ ���
�� ������ �����ϱ� ��ٷӴ�
- ��ü
�� Ŭ������ ��ü�� �����ϴ� Ʋ�̳� ���赵
�� Ʋ�� ������ٸ� ��Ծ�� 
�� ��ü�� ���赵�� ������� ��üȭ ��Ű�� ��
�� �ν��Ͻ�ȭ : Ŭ������ ����Ͽ� ��ü�� �����ϴ� ������ �ǹ�

==================================================
class �ڵ���{
private:
// �������(�Ӽ�->��ǰ->���ܾ���)

public:
// ����Լ�(���->�극��ũ,�������õ�...->�츮�� �̿��ؾ� ��->����)
}

==================================================
- ��������������
- private : ���ܾ� �� ������� ���� �̰��� ���
�� Ŭ������ ����Ʈ
- public : �ܺο��� �����Ӱ� ������ �� �ִ�
�� �ܺο��� ���������� ������� ������ �� �ֱ� ������ ������ ��ɵ��� �̰��� ���
- protected : ��Ӱ���...

��������		Ŭ��������	Ŭ�����ܺ�	���Ŭ����
private			O			X			X
public			O			O			O
protected		O			X			O

==================================================

*/
#include<iostream>
using namespace std;

// C++������ ����ü�� ��� ���
// class���� ���̴� defalt ���� ���� �����ڰ� �ٸ��ٴ� �� ��
struct Circle {
// public:
	int radius;
	string color;
	double calcArea() {
		return 3.14 * radius * radius;
	}
};

class CCircle {
// private:
	int radius;
	string color;
	double calcArea() {
		return 3.14 * radius * radius;
	}
};

class Student
{
public:			// ��������
	Student();	// ������
	~Student();	// �Ҹ���

public:
	// ����Լ�
	void Print() {
		cout << "��Ʃ��Ʈ Ŭ������ ����Ʈ �Լ�";
	}
	void Print(int a, int b) {
		cout << a << ", " << b << endl;
	}
	void Print(string str = "����Ʈ �Ű�����") {
		cout << str << endl;
	}

	// Ŭ���� ���ο� ������ ����
	int Sum(int a, int b);

private:		// ��������
	// �������
};

int main() {
	Circle c;
	c.radius = 5;
	c.calcArea();

	CCircle cc;
	// cc. -> ���� �Ұ�
}

int Student::Sum(int a, int b)
{
	return a + b;
}
