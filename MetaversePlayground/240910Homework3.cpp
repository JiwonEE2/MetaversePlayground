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
	int table[25] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24 };
	
	// ����
	srand(time(0));
	TableShuffle(table);
	/* 
	// ���� Ȯ�ο�!
	for (int i = 0; i < 25; i++) {
		cout << table[i] << endl;
	}
	*/


}