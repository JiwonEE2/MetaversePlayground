// 240903 ����
/*	
[����1]
1. �� ���� �Է��� �޴´�. 
2. �� ���� �Է��� ��Ģ ������ �Ѵ�.
3. ���� ����� ����Ѵ�.

[����2]
1. �� ���� �Է��� �޴´�.
2. �Է��� ���� ���ϴ� ������ �����Ӱ� ������
ex) input=3, input=1

[����3]
�µ� ��ȯ �����
�����µ�(�Է�) -> ȭ���� ��ȯ�ϱ�
(���� * 9/5) + 32 = ȭ��

[����4]
���� ��ǥ, ������
�޸� ����(ppt)
*/

#include<iostream>
int main() {
	// ����1
	std::cout << "=========����1(��Ģ����)=========" << std::endl;
	int num1, num2;
	std::cout << "ù��° ���� �Է��ϼ��� : ";
	std::cin >> num1;
	std::cout << "�ι�° ���� �Է��ϼ��� : ";
	std::cin >> num2;

	std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
	std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
	std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
	std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;

	// ����2
	std::cout << "\n=========����2(��)=========" << std::endl;
	int num3, num4;
	std::cout << "ù��° ���� �Է��ϼ��� : ";
	std::cin >> num3;
	std::cout << "�ι�° ���� �Է��ϼ��� : ";
	std::cin >> num4;

	std::cout << num3 << " > " << num4 << " --> " << (num3 > num4) << std::endl;
	std::cout << num3 << " < " << num4 << " --> " << (num3 < num4) << std::endl;
	std::cout << num3 << " >= " << num4 << " --> " << (num3 >= num4) << std::endl;
	std::cout << num3 << " <= " << num4 << " --> " << (num3 <= num4) << std::endl;
	std::cout << num3 << " == " << num4 << " --> " << (num3 == num4) << std::endl;
	std::cout << num3 << " != " << num4 << " --> " << (num3 != num4) << std::endl;

	// ����3
	std::cout << "\n=========����3(�µ���ȯ)=========" << std::endl;
	int ctemp;
	std::cout << "���� �µ��� �Է��ϼ��� : ";
	std::cin >> ctemp;
	int ftemp;
	ftemp = (ctemp * 9 / 5) + 32;
	std::cout << ctemp << "��C�� ȭ���µ��� " << ftemp << "��F�Դϴ�." << std::endl;
}