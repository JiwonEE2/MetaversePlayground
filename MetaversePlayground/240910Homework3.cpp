/* 240910 ����1
[ ������� ]
- ũ�� : 5 x 5 (1,2���� �������)
ex) 10 �Է� �� 10�� �� �κ� ���� ǥ��
- ���� ���� : ����3
*/
#include<iostream>
using namespace std;

void TableShuffle(int table[]) {
	int dest, temp;
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
	// 5-1. input�� �ִ� ��ġ ã��
	// 5-2. ���(����ǥ��)
	// 3~5 �ݺ�

	// 0. ����
	cout << "~~~ ������� ~~~\n\n";

	// 1. ���̺� ����
	int table[25];
	for (int i = 0; i < 25; i++) {
		table[i] = i;
		// 1-1. ���̺� ǥ��(for������)
		cout << table[i] << "\t";
		if (i % 5 == 4) {
			cout << "\n";
		}
	}

	// 2. ����
	srand(time(0));
	TableShuffle(table);
	// 
	//// ���� Ȯ�ο�!
	//for (int i = 0; i < 25; i++) {
	//	cout << table[i] << endl;
	//}
	//

	// 3. ����Ȯ��
	
	// 4. �Է¹ޱ�
	int input;
	cout << "0~24 ������ ���ڸ� �ϳ� ������ �ּ��� : ";
	cin >> input;
	// 4-2. 0~24 ������ ���� �������� ���� ���

	// 5-1. input�� �ִ� ��ġ ã��
	int index;
	for (int i = 0; i < 25; i++) {
		if (table[i] == input) {
			index = i;
		}
	}
	//
	//// input ��ġ Ȯ�ο�!
	//cout << index;
	//
}