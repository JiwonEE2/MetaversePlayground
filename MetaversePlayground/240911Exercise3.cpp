#include<iostream>
using namespace std;
/*	240911 �ǽ�3
3. ���ڿ� �� Ư�� ���� ���� ã��
ex) input : aabbccddddd
	���� ã������ �ϴ� ���� : d
	output : 5
	1. �Է��� �޴´�
	2. ���� ã������ �ϴ� ���ڸ� �Է¹޴´�
	3. ã�� ������ �����
	4. 1���� �Է��� ���ڿ��� ���̸�ŭ
	4-2. ���� ���� ã������ �ϴ� ���ڿ� ?? �� ���ٸ�
	���� ���ڸ� ī���� ���ִ� �..
*/

int main() {
	cout << "���ڿ��� �Է��ϼ��� : ";
	string input;
	cin >> input;

	cout << "���� ã������ �ϴ� ���� : ";
	char charInput;
	cin >> charInput;

	int count = 0;
	for (int i = 0; i < input.length(); i++) {
		if (input[i] == charInput) {
			count++;
		}
	}
	cout << charInput << "�� ������ : " << count << "\n";
}