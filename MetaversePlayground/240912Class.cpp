/*
==================================================
class
- ��ü ���� ����� ����Ʈ���� ���迡 �־ ���� ������ �����ϴ� ������ ���
�� ������ �����ϱ� ��ٷӴ�
- ��ü
�� Ŭ������ ��ü�� �����ϴ� Ʋ�̳� ���赵
�� Ʋ�� ������ٸ� ��Ծ�� 
�� ��ü�� ���赵�� ������� ��üȭ ��Ű�� ��
�� �ν��Ͻ�ȭ : Ŭ������ ����Ͽ� ��ü�� �����ϴ� ������ �ǹ�
==================================================
class �ڵ���{
// �������(�Ӽ�->��ǰ)
// ����Լ�(���->�극��ũ,�������õ�...)





*/
#include<iostream>
using namespace std;

// C++������ ����ü�� ��� ���
// class���� ���̴� defalt ���� ���� �����ڰ� �ٸ��ٴ� �� ��
struct Circle {
// public:
	int radius;
	string color;
	double calcArea() {
		return 3.14 * radius * radius;
	}
};

class CCircle {
// private:
	int radius;
	string color;
	double calcArea() {
		return 3.14 * radius * radius;
	}
};

int main() {
	Circle c;
	c.radius = 5;
	c.calcArea();

	CCircle cc;
	// cc. -> ���� �Ұ�
}