#include<iostream>
/*
==========Data Type(�ڷ���)==========
- �ڷ����� �����͸� ǥ���ϴ� ���
�� ������ �������� ������ ���� �Ҵ�� �޸� ������ ������ �̸�
�� �޸� ������ �Ҵ翡 �ռ� ������ �Ǽ��� �����Ұ� �� �����ؾ� ��
�� ���� �������� �����Ѵٰ� ������ �� �� ����Ʈ�� ����Ұ� �� �����ؾ� ��
�� "������ ������ �ǵ� ũ�⸦ 4byte�� �ϰ� �̸��� num���� ��."
---------> int num;


====== �⺻ �ڷ����� ������ �������� ǥ�� ����=====
�ڷ���				ũ��(byte)
char				1
short				2			-32.~+32
int					4			-21��~+21��~
long				
long long			

�Ǽ��� (�Ҽ��� ���е� ����)
float				4
double				8

bool
*/

int main() {
	std::cout << "int ���� ũ�� : " << sizeof(int) << "����Ʈ" << std::endl; // sizeof : �ڷ����� ũ�⸦ ��Ÿ��
	std::cout << "short ���� ũ�� : " << sizeof(short) << "����Ʈ" << std::endl;
	std::cout << "char ���� ũ�� : " << sizeof(char) << "����Ʈ" << std::endl;
	std::cout << "long ���� ũ�� : " << sizeof(long) << "����Ʈ" << std::endl;
	std::cout << "long long ���� ũ�� : " << sizeof(long long) << "����Ʈ" << std::endl;
	std::cout << "float ���� ũ�� : " << sizeof(float) << "����Ʈ" << std::endl;
	std::cout << "double ���� ũ�� : " << sizeof(double) << "����Ʈ" << std::endl;
	std::cout << "bool ���� ũ�� : " << sizeof(bool) << "����Ʈ" << std::endl;

	std::cout << "=========================================" << std::endl;

	//int a = 'b'; // �ƽ�Ű �ڵ� ��ȣ ���(98)
	//char num1 = 100; // �ƽ�Ű �ڵ� 100��°�� ���� ���(d)
	//std::cout << a << std::endl;
	//std::cout << num1 << std::endl;

	char num1 = 1;
	char num2 = 2;

	char result = 0;

	short num3 = 300;
	short num4 = 200;
	short result1 = 0;

	std::cout << "���� num1�� ������ : " << sizeof(num1) << std::endl; // 4
	std::cout << "���� num2�� ������ : " << sizeof(num2) << std::endl; // 2
	std::cout << "���� result�� ������ : " << sizeof(result) << std::endl; // 1
	std::cout << "=========================================" << std::endl;
	std::cout << "���� num3�� ������ : " << sizeof(num3) << std::endl;
	std::cout << "���� num4�� ������ : " << sizeof(num4) << std::endl;
	std::cout << "���� result1�� ������ : " << sizeof(result1) << std::endl;

	std::cout << "char ���� num1+num2�� ������ : " << sizeof(num1 + num2) << std::endl;
	std::cout << "short ���� num3+num4�� ������ : " << sizeof(num3 + num4) << std::endl;

	float a = 3.141592; // int ���� ��� 3
	std::cout << a << std::endl;
}