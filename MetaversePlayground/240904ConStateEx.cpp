#include<iostream>

int main() {
	// �ǽ�
	// 1. �Է��� �� �� �޴´�
	// 2. ���ϱ� ���� ���� �������� �����Ѵ�.
	// 3. ���� 1���� ������ ���ϱ⿡ ���� ���� ����� ����
	//		2���� ����, ����, ������..

	int num1, num2, input, result;
	std::cin >> num1 >> num2 >> input;

	if (input == 1) {
		result = num1 + num2;
	}
	else if (input == 2) {
		result = num1 - num2;
	}
	else if (input == 3) {
		result = num1 * num2;
	}
	else if (input == 4) {
		result = num1 / num2;
	}
	else {
		std::cout << "�߸��� �Է�" << std::endl;
	}
	std::cout << result;
}