#include<iostream>
using namespace std;
/*	240906 �ǽ�1
1. ����ڰ� �Է��� ���� ������ �� �ڸ����� ��(�Լ�)
	ex) 15248 -> 1+5+2+4+8
*/

void sum() {
	int input;
	cout << "����� �� : ";
	cin >> input;
	int sum = 0;
	while (input != 0) {
		sum += input % 10;
		input /= 10;
	}
	cout << "�� : " << sum << "\n";
}

int main() {
	sum();
}