#include<iostream>
using namespace std;
/*	240906 �ǽ�2
2. ����ڰ� �Է��� �ִ밪�� �ּҰ�(�Լ�)
	ex) 5,1
	��� : �ִ밪�� 5, �ּҰ� 1
	���� 5���� �޴� ����. 
	�ʹݿ� � ���� ���� �Է¹ް� �迭 �Ҵ��Ϸ��� �����Ҵ� �ؾ��Ѵ�.
*/

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

int main() {
	MinMax();
}