/*
�Լ�
- Ư�� �۾��� �����ϴ� �ڵ��� ����
- �ڵ��� ������, ������ �����ϱ� ����.
- ������ Ŀ���� ���α׷��ϼ��� ����, ���������� ��ƴ�
�� ��ɺ��� ����ȭ ��Ű�� ���� �ʿ�
- �ڵ��� ���뼺�� ����

�⺻������ �Լ��� �Ű�����(�Ķ����)������ ��ȯ���� ������ ���� �Լ��� ���¸� �� ���� ���·� ���� �� �ִ�.

1. �Ű������� ��ȯ���� ��� �ִ� ���
2. �Ű������� �ְ� ��ȯ���� ���� ���
3. �Ű������� ���� ��ȯ���� �ִ� ���
4. �Ű������� ��ȯ���� ��� ���� ���

*/
// 1. ��������
/*
- �߰�ȣ ���� ����Ǵ� ������ ��� �����̴�
- Ȱ�� ������ ������ ����� ��� �������� ��ȿ

*/

#include<iostream>

// 1. �Ű������� ��ȯ���� ��� �ִ� ���
int Sum(int a, int b) {
	int res = a + b;
	return res;
}

// 2. �Ű������� �ְ� ��ȯ���� ���� ���
void MyPrint(int num) {
	std::cout << num << std::endl;
	// return num;
}

// 3. �Ű������� ���� ��ȯ���� �ִ� ���
int ReadNum() {
	int num;
	std::cin >> num;
	return num;
}

// 4. �Ű������� ��ȯ���� ��� ���� ���
void Print() {
	std::cout << "�ƹ��͵� �����" << std::endl;
}

void LocalVariable() {
	// ��������
	int num = 1;
	{
		num = 2;

		int num1 = 5; // �߰�ȣ �������� ��ȿ
	}
	std::cout << num << std::endl;
	// std::cout << num1 << std::endl; // �ȵ�
}
int GlobalVariable = 10;

void GlobalVariable() {
	std::cout << GlobalVariable << std::endl;
}

// local global
int main() {
	// 1. ��ȯ���� ����
	int result;
	result = Sum(1, 2);
	std::cout << "Sum() �Լ� ȣ�� ��� : " << result << std::endl;

	// 2. ��ȯ���� ����
	MyPrint(5);
	LocalVariable();
}