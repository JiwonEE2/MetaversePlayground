#include<iostream>
using namespace std;
/*	240906 ����1
1. ���ھ߱�����(�迭)
	�����ϰ� ���ڸ� 3�� �̴´�(0~9)
	1,5,3
	�� 1,3,5
	����� 1s2b
	�������� : 3s, 1out

1. ���� 3�� �������� �̱� -> �迭 ���
2. ���� 3�� �Է¹ޱ�
3. ��� ����ϱ�
4. �������� Ȯ���ϰ� false�� �ݺ�

*/
void ComputerPick() {
	int computerNumber[3], computerUsed[3] = { -1,-1,-1 };	// �ʱ�ȭ���� ������ ���� 0�� �Ǿ �ߺ� Ȯ���� �� ������ �����
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			do{
				computerNumber[i] = rand() % 10;
			} while (computerUsed[j] == computerNumber[i]);
		}
	}
}


void baseball() {
	cout << "���ھ߱� ����\n";

	// 1. ���� 3�� �ߺ����� �������� �̾� �迭�� ���ʷ� �Ҵ��ϱ�
	int computerNumber[3], computerUsed[3] = { -1,-1,-1 };	// �ʱ�ȭ���� ������ ���� 0�� �Ǿ �ߺ� Ȯ���� �� ������ �����
	srand(time(0));

	ComputerPick();
	

	int input[3], strike, ball;

	/*computerNumber[0] = -1;
	for (int i = 1; i <= 3; i++) {
		do {
			computerNumber[i] = rand() % 10;
		} while (computerNumber[i] == computerNumber[i - 1] || computerNumber[i] == computerNumber[i - 2] && i >= 2);
		cout << "com�� ���� : " << computerNumber[i] << "\n";
	}*/

	do {
		strike = 0, ball = 0;
		input[0] = 0;
		for (int i = 1; i <= 3; i++) {
			cin >> input[i];
		}

		for (int i = 1; i <= 3; i++) {
			for (int j = i; j <= 3; j++) {
				if (input[i] == computerNumber[j]) {
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
	} while (strike + ball != 0 && strike != 3);
}

int main() {
	baseball();
}