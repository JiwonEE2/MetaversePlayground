/*
���ڹ迭
- �� �״�� ���ڸ� �����ϴ� �迭. ���ڿ� ������ �� �迭�� �������� null���ڸ� �߰��Ͽ� ���ڿ��� ���� ǥ���ؾ���

**c ��Ÿ���� ���ڿ� �Լ� ����
- strlen(const char* str) : ���ڿ��� ���̸� ��ȯ
- strcpy(char* dest, char* src) : ���ڿ��� ����
- strcat : ���ڿ� ����
- strcmp : ���ڿ� ��
*/

#include<iostream>
using namespace std;

int main() {
	//char str[6];
	//char str1[6] = { 'H', 'e','l','l','o','\0' };	// '\0' : null ����

	//for (int i = 0; i < 6; i++) {
	//	cout << str1[i];
	//}
	//char str2[] = "Hello";		// char �� �迭�� ���ڿ��� �����ϸ� ���ڷ� ������, �ڵ����� null���ڰ� �߰��ȴ�.
	//for (size_t i = 0; i < str2[i] != '\0'; i++)	// ���� null �� �ƴ� ������ ����
	//{

	//}
	//char str3[] = "�ѱ�";

	char str1[50] = "Hello";
	char str2[10] = "kyungil";
	char str3[10];

	cout << "str1�� ���� : " << strlen(str1) << endl;
	cout << "str2�� ���� : " << strlen(str2) << endl;

	strcpy_s(str3, str1);		// str1�� str3�� ����
	cout << "strcpy : " << str3 << endl;
	strcat_s(str1, str2);		// str1�� str2�� ����
	cout << "strcat : " << str1 << endl;
}