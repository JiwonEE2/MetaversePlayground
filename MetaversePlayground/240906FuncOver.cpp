/*
�Լ� �����ε�
- ������ �Լ� �̸��� ����Ͽ� �Ű������� Ÿ��, ����, ������ �ٸ��� �����ϴ� ��
- ������ �� ���Ǽ� ���
�� ����� �۾��� �����ϴ� ���� �Լ��� ���� �� �� �Լ��� �ٸ� �̸��� �ο��ϴ� ��� �Լ� �����ε��� ����ϸ�
�ڵ��� �������� ���Ǹ� ����ڴ� �ϳ��� �Լ� �̸����� �پ��� ������ �Լ��� ȣ�� ����
- �ϰ��� ����
�� ����� �۾��� �Լ����� ���� ��� �Լ� �����ε��� ����ϸ� �� �Լ����� ������ �̸��� ������ �־
�ڵ��� �ϰ����� ����

- �ߺ� �ڵ� ����
�� ���� �Լ� ���� ����� ����� ���� �� �ߺ� �ڵ带 �����ϰ� �ڵ��� ���뼺�� ���� �� �ִ�.

** �Լ� �����ε� ���� ���� **
1. �Լ� �̸��� �����ؾ� ��
2. ���� Ÿ���� ��� ����� �ƴ�
3. �Ű������� ������ ������ �ٸ��ų� ������ �޶�� �Ѵ�.
*/

void PrintValue(int value) {
	std::cout << "���� �� : " << value << std::endl;
}

void PrintValue(double value) {
	std::cout << "�Ǽ� �� : " << value << std::endl;
}

int Sum(int a, int b) {

}
double Sum1(double a, double b) {
	return a + b;
}

int Multi(int left, int right) {
	return left * right;
}

float Multi(float left, float right) {
	return left * right;
}

double Multi(double left, double right) {
	return left * right;
}

#include<iostream>

int main() {
	PrintValue(10);		// �Ű������� ���� Ÿ���� �Լ��� ȣ��
	PrintValue(10.5);	// �Ű������� �Ǽ� Ÿ���� �Լ��� ȣ��
	std::cout << Multi(5, 3);
	std::cout << Multi(5.1, 3.2);
}