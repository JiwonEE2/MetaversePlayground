#include<iostream>
using namespace std;
/*	240911 �ǽ�2
2. ��Ʈ�� Ŭ������ �̿��Ͽ� ���ڿ��� �����´�.(reverse) (*. C ��Ÿ�Ϸ� �غ���)
ex) input : abcde -> output : edcba
*/

int main() {
	string str = "Hello";
	reverse(str.begin(), str.end());
	cout << str;
}