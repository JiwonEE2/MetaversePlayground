#include<iostream>
using namespace std;
/*
===============================================
* ������ ������ (Operator Overloading)
- ��������� �ڷ����̳� Ŭ������ �����ڸ� �������Ͽ� ���� �ǹ̷� ����Ѵ�
- ��ü ���� �������, ��, ���� ���� �����ϰ� ����
- ��, �Ϻ� �����ڴ� �����ε� �Ұ�

< ������ ������ >
// ��ȯ�� operator�����ڱ�ȣ(�Ű�����){�Լ�����}
// �⺻ �������� ������ �Լ��� �������Ͽ� ��� ����
===============================================
*/

// const : ���ȭ. ���� �Ұ���. ������ ����

// #define MAX 10		// MAX�� 10���� ġȯ
const int MAX = 10;		// ���� ����(����)

struct Point {
	float x;
	float y;

	// ������
	Point(float x, float y) {
		this->x = x;	// -> : Pointer���� ���, this : �� �ڽ��� ����Ű�� ������
		this->y = y;
	}
	// 1. ����Լ��� ���� ������ ������
	Point operator+(Point& other) {
		return Point(this->x + other.x, this->y + other.y);
	}

	// const�� ����� �Լ� ���ο����� const�� ���� ���� �Լ��� ȣ���� �� ����?
	void Test()const {

	}

	// Point ����ü�� ����Լ�
	void Print() {
		Test();
		cout << "(" << x << ", " << y << ")\n";
	}

	float GetX()const {
		return this->x;		// ������� x�� �������� �ʰڴ�. �б� ���� �Լ��� �����
	}
};

// 2. �����Լ��� ���� ������ ������
Point operator-(Point& left, Point& right) {
	return Point(left.x - right.x, left.y - right.y);
}

void PrintArr(const int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << endl;
	}
	// arr[0] = 5;		// �迭 ���� �Ұ�
}

int main() {
	int arr[MAX];

	for (int i = 0; i < MAX; i++) {

	}

	// �������� : ������ �����ε� �����ϱ⿡ ������
	//const int num = 10;		// ���ȭ. ���� �Ұ���. ������ ����
	//num = 20;

	Point vec1 = Point(2, 1);
	Point vec2 = Point(3, 1);

	Point add = vec1 + vec2;	// ��ü������ ����
	Point sub = vec1 - vec2;

	add.Print();
	sub.Print();
}