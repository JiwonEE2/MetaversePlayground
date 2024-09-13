/*	240913 ����1
[ �����̵� ���� ����� ]
0. welcome ^^
1. ����
2. ���� ���
3. 0�� ��ġ ��ȯ�ϱ�
4. �Է� �ޱ�
5. �����̱�
6. puzzle class ���� �� 4���� �Լ��� ����� main�� while���� ����Ͽ� �ݺ�
- 4x4 ũ��
- wasd ���
*/
#include<iostream>
using namespace std;

class Puzzle {
	int number[16];
	char key;
	int zeroIndex;
	int keyNum;

public:
	Puzzle() {
		for (int i = 0; i < 16; i++) {
			number[i] = i;
		}
	}
	// 1. ����
	void ShufflePuzzle() {
		int temp, ran;
		srand(time(0));
		for (int i = 0; i < 16; i++) {
			ran = rand() % 16;
			temp = number[i];
			number[i] = number[ran];
			number[ran] = temp;
		}
	}
	// 2. ���� ���
	void DisplayPuzzle() {
		for (int i = 0; i < 16; i++) {
			cout << number[i] << "\t";
			if (i % 4 == 3) {
				cout << "\n";
			}

		}
	}
	// 3. 0�� ��ġ ��ȯ�ϱ�
	void ZeroWhere() {
		for (int i = 0; i < 16; i++) {
			if (number[i] == 0) {
				zeroIndex = i;
			}
		}
	}
	// 4. �Է� �ޱ�
	void InputKey() {
		cout << "wasd Ű�� �����̼���\n";
		cin >> key;
		switch (key)
		{
			// -4 �ε����� �ڸ� �ٲٱ�
		case 'w':
			keyNum = -4;
			break;
			// -1
		case 'a':
			keyNum = -1;
			break;
			// +4
		case 's':
			keyNum = +4;
			break;
			// +1
		case 'd':
			keyNum = +1;
			break;
		default:
			break;
		}
	}
	// 5. �����̱�
	void MoveZero() {
		int temp= number[zeroIndex +keyNum];
		number[zeroIndex + keyNum] = number[zeroIndex];
		number[zeroIndex] = temp;
	}
};

int main() {
	// 0. ����
	Puzzle p;
	// 1. ����
	p.ShufflePuzzle();

	// 6. �ݺ�
	while (true)
	{
		// 2. ���� ���
		p.DisplayPuzzle();

		// 3. 0�� ��ġ �ޱ�
		p.ZeroWhere();

		// 4. �Է¹ޱ�
		p.InputKey();

		// 5. �����̱�
		p.MoveZero();
	}
}