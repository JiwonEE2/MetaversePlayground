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

// 3. �Է� �޴� �Լ�
int UserInput(Table table[]) {
	int input;
	cout << "\n0~24 ������ ���ڸ� �ϳ� ������ �ּ��� : ";
	cin >> input;
	// 3-1. �ߺ��� ���� ������ ���(�迭 ���� ����, *���� 0���� Ȯ���ϸ� �� ������ ��)
	for (int i = 0; i < 25; i++) {
		if (table[i].number == input && table[i].display == '*') {
			cout << "�̹� �����ߴ� ���Դϴ�. �ٸ� ���� �Է��ϼ���\n";
		}
	}
	// 3-2. 0~24 ������ ���� �������� ���� ��� (break�� continue ���� ���� ������ ����ε� ���� ������ �ȵǴ� ����)
	if (input < 0 || input>24) {
		cout << "0�� 24������ ���� �����ϼ���\n";
	}

	return input;
}

// 4. input ��ġ ã�� �Լ�
int FindInput(int input, Table table[]) {
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
	return index;
}

int BingoCheck(int count, Table table[]) {
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

	// ���η� 5�� ���
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (table[j + 5 * i].display == '*') {
				temp++;
			}
		}
		if (temp == 5) {
			count++;
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
			count++;
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
		count++;
	}
	temp = 0;

	// �밢��2 : 4���� 4�� ����
	for (int i = 4; i < 25; i += 4) {
		if (table[i].display == '*') {
			temp++;
		}
	}
	if (temp == 5) {
		count++;
	}
	temp = 0;

	return count;
}

int main() {
	// 1. ���̺� ����
	// 1-1. ���̺� �ڷ����� char �迭�� ��� -> ������ �����Ѱ�? x ��������.
	// 1-2. ���̺� �ڷ����� ����ü�� ��� vv �̰ɷ� �����غ���
	// 2. ����
	// 4. �Է�
	// 5. input�� �ִ� ��ġ ã��
	// 6. ���(����ǥ��)
	// 3. ����Ȯ��
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
		// 3. �Է¹ޱ�
		int input = UserInput(table);

		// 4. input�� �ִ� ��ġ ã��
		int index = FindInput(input,table);		

		// 5. ���� ǥ���ϰ� ���̺� ����ϱ�
		table[index].display = '*';
		for (int i = 0; i < 25; i++) {
			cout << table[i].display;
			if (i % 5 == 4) {
				cout << "\n";
			}
		}

		count = 0;
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
		count = BingoCheck(count, table);
		cout << "\n���� ���� : " << count << "\n";
	}
}