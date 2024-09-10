/* 240910 ����1
[ ������� ]
- ũ�� : 5 x 5 (1,2���� �������)
ex) 10 �Է� �� 10�� �� �κ� ���� ǥ��
- ���� ���� : ����3
*/
#include<iostream>
using namespace std;

struct Table {
	int number;
	char display;
};

void TableShuffle(Table table[]) {
	int dest;
	Table temp;
	for (int i = 0; i < 25; i++) {
		dest = rand() % 25;
		temp = table[dest];
		table[dest] = table[i];
		table[i] = temp;
	}
}

bool BingoCheck(Table table[]) {
	// 3. ����Ȯ��
		// ������ ����� ��(����� �� count++)
		// (����(5��)) 01234 / 56789 / ...	: %5==0���� 5�� ����
		// (����(5��))	0	1
		//				5	6
		//				10	11
		//				15	16
		//				20	21		/ ...	: 5�� �������� ���� -> ??
		// (�밢��1(1��)) 0 6 12 18 24		: 0���� 6�� �����̰ų�
		// (�밢��2(1��)) 4 8 ...			: 4���� 4�� �����̰ų�
	int temp = 0;
	bool isBingo = false;

	// ���η� 5�� ���
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (table[j + 5 * i].display == '*') {
				temp++;
			}
		}
		if (temp == 5) {
			isBingo = true;
		}
		temp = 0;
	}

	// ���η� 5�� ���
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (table[i + 5 * j].display == '*') {
				temp++;
			}
		}
		if (temp == 5) {
			isBingo = true;
		}
		temp = 0;
	}

	// �밢��1 : 0���� 6�� ����
	for (int i = 0; i < 25; i += 6) {
		if (table[i].display == '*') {
			temp++;
		}
	}
	if (temp == 5) {
		isBingo = true;
	}
	temp = 0;

	// �밢��2 : 4���� 4�� ����
	for (int i = 4; i < 25; i += 4) {
		if (table[i].display == '*') {
			temp++;
		}
	}
	if (temp == 5) {
		isBingo = true;
	}
	temp = 0;

	return isBingo;
}

int main() {
	// 1. ���̺� ����
	// 1-1. ���̺� �ڷ����� char �迭�� ��� -> ������ �����Ѱ�? x ��������.
	// 1-2. ���̺� �ڷ����� ����ü�� ��� vv �̰ɷ� �����غ���
	// 2. ����
	// 3. ����Ȯ��
	// 4. �Է�
	// 5. input�� �ִ� ��ġ ã��
	// 6. ���(����ǥ��)
	// 3~6 �ݺ�

	// 0. ����
	cout << "~~~ ������� ~~~\n\n";

	// 1. ���̺� ����
	Table table[25];
	for (int i = 0; i < 25; i++) {
		table[i].number = i;
		table[i].display = 'O';
		// 1-1. ���̺� ǥ��(for������)
		cout << table[i].display;
		if (i % 5 == 4) {
			cout << "\n";
		}
	}

	// 2. ����
	srand(time(0));
	TableShuffle(table);
	/*
	// ���� Ȯ�ο�!
	for (int i = 0; i < 25; i++) {
		cout << table[i].number << endl;
	}
	*/

	// 3. ���� Ƚ�� 3ȸ �̻��� �� ������ while��
	int count = 0;
	while (count < 3) {
		// 3. ����Ȯ��
		// ������ ����� ��(����� �� count++)
		// (����(5��)) 01234 / 56789 / ...	: %5==0���� 5�� ����
		// (����(5��))	0	1
		//				5	6
		//				10	11
		//				15	16
		//				20	21		/ ...		: 5�� �������� ���� -> ??
		// (�밢��1(1��)) 0 6 12 18 24		: 0���� 6�� �����̰ų�
		// (�밢��2(1��)) 4 8 ...			: 4���� 4�� �����̰ų�
		if (BingoCheck(table) == true) {
			count++;
		}
		cout << "\n���� ���� : " << count << "\n";

		// 4. �Է¹ޱ�
		int input;
		cout << "\n0~24 ������ ���ڸ� �ϳ� ������ �ּ��� : ";
		cin >> input;
		// 4-1. �ߺ��� ���� ������ ���
		// 4-2. 0~24 ������ ���� �������� ���� ���

		// 5. input�� �ִ� ��ġ ã��
		int index;
		for (int i = 0; i < 25; i++) {
			if (table[i].number == input) {
				index = i;
			}
		}
		/*
		// input ��ġ Ȯ�ο�
		cout << index;
		*/

		// 6. ���� ǥ���ϰ� ���̺� ����ϱ�
		table[index].display = '*';
		for (int i = 0; i < 25; i++) {
			cout << table[i].display;
			if (i % 5 == 4) {
				cout << "\n";
			}
		}
	}
}