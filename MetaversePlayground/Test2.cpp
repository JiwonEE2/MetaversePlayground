#include<iostream>

using namespace std;
int main() {
	srand(time(NULL));

	int number[10];

	int dest, sour, temp;

	// �迭 �ʱ�ȭ
	for (int i = 0; i < 10; i++) {
		number[i] = i + 1;	// number[10] = { 1,2,3,4,5,6,7,8,9,10 };
	}
	cout << "���� �� : \n";
	for (int i = 0; i < 10; i++) {
		cout << "number[" << i << "]�ε��� : " << number[i] << "\n";
	}

	// ����
	for (int i = 0; i < 1000; i++) {
		dest = rand() % 10;
		sour = rand() % 10;

		// �� �ε��� ��ȯ
	}
}