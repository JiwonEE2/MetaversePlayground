/* 240906 �ǽ�
1. ����ڰ� �Է��� ���� ������ �� �ڸ����� ��(�Լ�)
	ex) 15248 -> 1+5+2+4+8
2. ����ڰ� �Է��� �ִ밪�� �ּҰ�(�Լ�)
	ex) 5,1
	��� : �ִ밪�� 5, �ּҰ� 1

	240906 ����
1. ���ھ߱�����(�迭)
	�����ϰ� ���ڸ� 3�� �̴´�(0~9)
	1,5,3
	�� 1,3,5
	����� 1s2b
	�������� : 3s, 1out

2. ī�����(������)

*/
#include<iostream>
using namespace std;
void sum() {
	int input;
	cout << "����� �� : ";
	cin >> input;
	int sum = 0;
	while (input != 0) {
		sum += input % 10;
		input /= 10;
	}
	cout << "�� : " << sum << "\n";
}

void MinMax() {
	int nums[5];

	for (int i = 0; i < 5; i++) {
		cin >> nums[i];
	}

	int min = nums[1], max = nums[1];
	for (int i = 0; i < 5; i++) {
		if (nums[i] < min) {
			min = nums[i];
		}
		if (nums[i] > max) {
			max = nums[i];
		}
	}

	cout << "�ִ밪 : " << max << "\n�ּҰ� : " << min;
}

void baseball() {
	cout << "���ھ߱� ����\n";
	int input[3], com[3], strike, ball;

	srand(time(NULL));
	com[0] = -1;
	for (int i = 1; i <= 3; i++) {
		do {
			com[i] = rand() % 10;
		} while (com[i] == com[i - 1] || com[i] == com[i - 2] && i >= 2);
		cout << "com�� ���� : " << com[i] << "\n"; 
	}
	
	do {
		strike = 0, ball = 0;
		input[0] = 0;
		for (int i = 1; i <= 3; i++) {
			cin >> input[i];
		}

		for (int i = 1; i <= 3; i++) {
			for (int j = i; j <= 3; j++) {
				if (input[i] == com[j]) {
					if (i == j) {
						strike++;
					}
					else {
						ball++;
					}
				}
			}
		}
		cout << strike << "S " << ball << "B\n";
	} while (strike + ball != 0 && strike!= 3);
}

int main() {
	// �ǽ�1
	//cout << "==== �ǽ�1 ====\n";
	//sum();

	//// �ǽ�2
	//cout << "==== �ǽ�2 ====\n";
	//MinMax();

	// ����1
	cout << "==== ����1 ====\n";
	baseball();
}