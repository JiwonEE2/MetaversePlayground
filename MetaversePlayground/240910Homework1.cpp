/* 240910 �ǽ�1

[ �����͸� �̿��� �հ� ���ϱ� ]
1. 10���� ������ �ʱ�ȭ�� �迭�� ����
2. �����ͷ� ���
*/

#include<iostream>
using namespace std;

int main() {
	int nums[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// ~~~~~������
	int* parr = &nums[0];	// nums[0]�� �ּҰ��� �����Ϳ� ����
	int sum = 0;
	while (parr - nums < 10) {	// �����Ͱ� �迭�� ���� ���� ���� ������ �ݺ�
		sum += *parr;	//
		parr++;			// �����͸� ���� ��ҷ� �̵�
	}

	// ���ڵ�
	/*for (int i = 0; i < 10; i++) {
		sum += *parr + i;
		cout << sum << endl;
	}*/
}