/*
�Լ�(Function)
<�Լ�����>
// ��ȯ�� �Լ��̸�(�Ű�����){�Լ�����}

<��ȯ��(Return Type)>
// �Լ��� ���(���)
// �Լ��� ��� �����Ͱ� ���� ��ȯ�� void
<return>
// �Լ��� ������ ������ �ݵ�� return���� ��ȯ���� �´� �����͸� return��
// �Լ� ���� �� return�� ������ ��� �� ��� �����͸� ��ȯ�ϰ� �Լ��� Ż��
// void ��ȯ�� �Լ��� return�� ��������
*/
#include<iostream>
int IntReturn() {
	std::cout << "return ��" << std::endl;
	return 10;
	std::cout << "return ��" << std::endl;
}

void Func4_2() {
	std::cout << "��" << std::endl;
}

void Func4_1() {
	Func4_2();
}

void Main() {
	Func4_1();
}

int main() {
	Main();
}