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

�Ǽ���
float				
double				

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
}