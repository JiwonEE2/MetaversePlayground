/*
while
- ������ ��(true)�� ���� Ư���ڵ带 �ݺ� �����ϱ� ���� �ݺ�
- ������ ������ �� ������ ��� �ݺ�
- �Ϲ������� �ݺ� Ƚ���� �̸� �������� �ʾҰų� Ư�� ������ ������ ������ �ݺ��ϴ� ��� ���

while (true)
{
	// �� ������ �����ϸ� ���� ����
	// ��, ���� ������ �־�߸� �ش� while�� �����
}

do-while
- ������ ������ ���ο� ������� �ڵ� ���� �ּ� �ѹ��� �����ؾ��� �� ���
- �ٸ� �ݺ������� �ٸ��� ������ ���߿� �˻��ϴ°� Ư¡
do
{
	// ������ �ڵ�
} while(����); ----> do ����� ����� �Ŀ� ������ �˻�
- ������ ���̸� �ڵ带 �ٽ� �����ϰ� �����̸� ����

while�� ������
- do-while�� ������ ���߿� �˻��ϹǷ� �ڵ� ���� �ּ� �ѹ��� ����
- while�� ������ ���� �˻��ϱ� ������ ó������ �����̸� �ڵ� ���� �ѹ��� �������� ���� �� �ִ�.
*/

#include<iostream>

int main() {
	/*while (true)
	{
		std::cout << "���ѷ���" << std::endl;
	}*/

	//int num = 0;

	//// num�� 10���� ������(���� ������ �ݺ�)
	//while (true) {
	//	if (num == 10)break; // ��������
	//	num++; // 1�� ����
	//	std::cout << num << std::endl;
	//}
	
	/*std::cout << "�ƹ� ���ڳ� �Է��� ������" << std::endl;
	while (true)
	{
		int inputNum;
		std::cin >> inputNum;

		std::cout << "���� �Է��� ���� : " << inputNum << std::endl;

		if (inputNum < 1 || inputNum>10)break;
	}*/

	// 1. while�� �̿��ؼ� �Է��� ��ŭ ����ϱ�
	// ex)3�� �Է��ϸ�
	// Hello World Hello World Hello World

	//std::cout << "���ڸ� �Է��ض� : ";
	//int inputNum;
	//std::cin >> inputNum; // �Է¿� ����

	//int count = 0; // ī��Ʈ�� ����

	//while (count < inputNum) {
	//	std::cout << "�Է��� ��ŭ ���" << std::endl;
	//	count++;
	//}

	int inputNum;
	int total = 0;

	do {
		std::cout << "0���� ū ���ڸ� �Է��ϼ���. �����Ϸ��� 0" << std::endl;
		std::cin >> inputNum;
		total += inputNum;
	} while (inputNum!=0); // 0�� �ԷµǸ� ����

	std::cout << "�հ� : " << total << std::endl;

	int num = 0;

	while (num>0)
	{
		// ������ ó������ false �̱� ������ ���� x
		std::cout << "����� ������� �ʴ´�" << std::endl;
	}
	do
	{
		std::cout << "����� �ּ� �� �� ����" << std::endl;
	} while (num>0); // ������ false���� do ����� ���� ����ȴ�.

	/*while (true) {
		int num = 0;
		num++;
		std::cout << num << std::endl;
	}*/
}