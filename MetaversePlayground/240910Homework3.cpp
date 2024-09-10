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

	while (true) {
		// 3. ����Ȯ��

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
		table[index].display = 'X';
		for (int i = 0; i < 25; i++) {
			cout << table[i].display;
			if (i % 5 == 4) {
				cout << "\n";
			}
		}
	}	
}