/*
struct �ǽ�

// �ǽ�
	// �л� ���� ���� ���巷����(����ü)
	// �̸�, ����, ����(����, ����, ����)
	// ����� ���ϴ� �Լ� �����
	// ex) ȫ�浿 20
	// ���� : 20
	// ���� : 30
	// ���� : 50
	// �� ���� �հ�� ��� ���
*/

#include<iostream>
using namespace std;

struct Student {
	string name;
	int english, math, science;
};

float CalculateAverage(Student st) {
	int subjectAverage = (st.english + st.math + st.science) / 3;
	return subjectAverage;
}

int main() {
	Student st[4] = {
		{"������",16,28,16},
		{"ȫ�浿",67,75,32},
		{"����",12,34,62},
		{"�̿�",98,76,90}
	};

	int studentAverage;
	for (int i = 0; i < 4; i++) {
		studentAverage = CalculateAverage(st[i]);
		cout << st[i].name << "�� ��� ������ " << studentAverage << "�� �Դϴ�.\n";
	}
}

