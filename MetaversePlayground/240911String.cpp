/*
string
- C++���� �����ϴ� ���ڿ��� �ٷ�� ���� Ŭ����
- C ��Ÿ���� ���� �迭 ���� �����ϰ� ����
- ���ڿ��� ��, ����, ����, �˻�, ���� �پ��� ��� �Լ����� ����


*/


#include<iostream>
using namespace std;

int main() {
	string str = "Hello";
	string name = "kyungil";

	string result;
	cout << "��Ʈ�� Ŭ������ Ȱ���� ���" << str << endl;
	
	// ���ڿ��� ���� ���(���� ��ȯ)
	cout << "str�� ���� : " << str.length() << endl;
	cout << "str�� ���� : " << str.size() << endl;		// string.length() == string.size()

	// ���ڿ� ����
	result = str + ", " + name + "!!";
	cout << "������ : " << result << endl;
	
	// substr : �κ� ���ڿ� ���� : Ư�� ��ġ���� ������ ���̸�ŭ �κ� ���ڿ��� ����
	string sub = result.substr(0, 5);
	cout << sub << endl;

	// ���ڿ� ��ü(���ڿ��� Ư�� �κ��� �ٸ� ������ ��ü)
	// 0��° ��ġ���� 3���� ���ڸ� Hi�� ����
	result.replace(0, 3, "Hi");
	cout << result << endl;

	// string.empty()�� �ڷ����� bool
	if (str.empty()) {
		cout << "��� ����";
	}
	else {
		cout << "��� ���� �ʴ�";
	}

	// ���ڿ� ���� �ٸ� ���ڿ� �߰�
	result.append("game");
	cout << result << endl;

	string test = "Hello World";
	test.insert(5, "-");
	cout << "insert : " << test << endl;
	test.erase(5, 2);
	cout << "erase : " << test << endl;
}