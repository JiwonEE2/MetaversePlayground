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
	int ZeroWhere() {
		for (int i = 0; i < 16; i++) {
			if (number[i] == 0) {
				return i;
			}
		}
	}
	// 4. �Է� �ޱ�
	void InputKey() {
		cout << "wasd Ű�� �����̼���\n";
		cin >> key;
	}
	// 5. �����̱�
	void MoveNumber() {
		switch (key)
		{
		case 'w':			
			break;
		case 'a':
			break;
		case 's':
			break;
		case 'd':
			break;
		default:
			break;
		}
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

		// 4. �Է¹ޱ�
		p.InputKey();

		// 5. �����̱�

	}
}