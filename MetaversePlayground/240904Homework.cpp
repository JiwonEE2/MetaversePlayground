// 240904 ����
/*
[1]
if���� ����ؼ� ���� ���߱�
���� 1~12, �̿��� �� �Է� �� �߸��� �Է�!
ex) 7 �Է� �� ����! ���
3~5�� ��
6~8�� ����
9~11�� ����
������ �ܿ�

[2] ���������� ����
���ڿ� �Է��� ���� ���� �����θ�
1. �÷��̾�� �Է��� �޴´�.(1:����, 2:����, 3:��)
2. ��ǻ������ -> �����ϰ� ����, ����, �� ����
3. ���и� ��Ÿ���� ����ϱ�
*/

#include<iostream>

int main() {
	// ����1
	std::cout << "============== ����1 ==============" << std::endl;
	int month;
	std::cout << "�� ���ΰ��� : ";
	std::cin >> month;
	if (month < 3 || month == 12) {
		std::cout << "�ܿ��Դϴ�." << std::endl;
	}
	else if (month < 6) {
		std::cout << "���Դϴ�." << std::endl;
	}
	else if (month < 9) {
		std::cout << "�����Դϴ�." << std::endl;
	}
	else if (month < 12) {
		std::cout << "�ܿ��Դϴ�." << std::endl;
	}
	else {
		std::cout << "�߸��� �Է��Դϴ�. ���ڸ� �Է��ϼ���" << std::endl;
	}

	// ����2
	std::cout << "============== ����2 ==============" << std::endl;
	int input;
	std::cout << "������ ���ðڽ��ϱ�? (1:����, 2:����, 3:��)" << std::endl;
	std::cin >> input;

	std::srand(std::time(NULL));
	int computer = std::rand() % 3 + 1; // 1~3������ ���� ����
	switch (computer) {
	case 1:
		std::cout << "��ǻ�ʹ� ������ �½��ϴ�." << std::endl;
		break;
	case 2:
		std::cout << "��ǻ�ʹ� ������ �½��ϴ�." << std::endl;
		break;
	case 3:
		std::cout << "��ǻ�ʹ� ���� �½��ϴ�." << std::endl;
		break;
	}

	if (input == computer) {
		std::cout << "�����ϴ�";
	}
	else if (input - computer == 1 || input - computer == -2) {
		std::cout << "����� �̰���ϴ�.";
	}
	else {
		std::cout << "����� �����ϴ�.";
	}
}