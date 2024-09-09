/*
<����ü>
Struct
- ����ü�� ���� ���� ������ ���� �ϳ��� ������ ������ �����ϴ� ����� ���� ������ ����
- ����ü�� ������ ������ ����� ������ �̷��� ������� ���� �ٸ� ������ Ÿ��..
- C++������ �Լ��� ������ ������

struct(Ű����) ����ü�̸�
struct MyStruct{

}
*/
#include<iostream>
using namespace std;

// Ű���� ����ü�̸�
struct Student {
	// �л��� ���õ� �����͵�
	string name;		// �л� �̸�
	int age;
	int phoneNumber;
};

// ����Լ�
void Print(int a, int b) {

}

struct Point {
	int x;			// �������
	int y;			// �������
	void Print();	// ����Լ�. C++������ �Լ��� ����� ����
};

struct Person {
	string name;
	string phoneNumber;
	int age;
};

struct Test {
	short a;	// 2
	char c;		// 1
	int b;		// 4
	// �ڷ����� �ٸ� ���� ������ ���� ũ�Ⱑ �޶�����
};
// CPU -> 4����Ʈ�� �ѱ�µ� short 2�� �ϸ� 2����Ʈ ���� ������ ������ char �� �� 1ĭ�̱⿡ ���� ä�� �� �ִ�.
// ���� �ٿ� int 4����Ʈ �Ҵ��. **�е�.

struct Point1 {
	double x;
	double y;
};

// �� �� ������ �Ÿ��� ����ϴ� �Լ�
double CalculateDistance(Point1 p1, Point1 p2) {
	double deltaX = p2.x - p1.x;
	double deltaY = p2.y - p1.y;

	return sqrt(deltaX * deltaX + deltaY * deltaY);
}

int main() {
	Test t;
	cout << sizeof(t) << endl;	// 12

	// ����ü ���� ����
	Student st;

	// ����ü ����� ���� �Ҵ�
	st.name = "ȫ�浿";
	st.age = 10;
	st.phoneNumber = 1234;

	cout << "�̸� : " << st.name << endl;
	cout << "���� : " << st.age << endl;
	cout << "��ȭ��ȣ : " << st.phoneNumber << endl;

	cout << "=================================================\n";
	
	Point p;
	p.x = 10;	// �� ����� �Ҵ�
	p.y = 20;
	cout << "����ü p.x�� �� : " << p.x << endl;
	cout << "����ü p.y�� �� : " << p.y << endl;
	p.Print();

	Point p1 = { 50,120 };	// ������ ���ÿ� �ʱ�ȭ
	cout << "����ü p.x�� �� : " << p1.x << endl;
	cout << "����ü p.y�� �� : " << p1.y << endl;

	// 3.
	Person per[3];

	per[0].name = "������";
	per[0].phoneNumber = "010-4567-1234";
	per[0].age = 10;

	per[1].name = "������";
	per[1].phoneNumber = "010-4567-1234";
	per[1].age = 30;

	per[2].name = "������";
	per[2].phoneNumber = "010-4567-1234";
	per[2].age = 20;

	// ����ü �迭�� 0��° �ε���
	cout << per[0].name << per[0].phoneNumber << per[0].age << endl;

	Person st1[3] = {
		{"�������","123123",50},
		{"����","1234523",20},
		{"��","123546123",30},
	};

	for (int i = 0; i < 3; i++) {
		cout << st1[i].name << st1[i].phoneNumber << st1[i].age << endl;
	}

	Point1 point1 = { 1.0,2.0 };
	Point1 point2 = { 4.0,6.0 };

	double distance = CalculateDistance(point1, point2);

	cout << "�� �� ������ �Ÿ� : " << distance << endl;	
}

void Point::Print() {
	cout << "���� Point ����ü�� ��� �Լ�" << endl;
}