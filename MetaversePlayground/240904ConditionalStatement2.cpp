/*
switch
- ���� ������ ó���ؾ� �� �� ���
- �ַ� ��� ���� �������� �б��� �� ���ȴ�.
- �ڵ尡 ����ϰ� �������� �ö�.
- ��ø�� ����

switch�� ����
1. �ϳ��� ������ �˻��ϰ� �� ������ ���� ���� ���� case ��� �߿� �ϳ��� ����
2. break�� Ű���带 ���� �� case�� ������ ����
3. break�� ������ ���� case ����� �����ؼ� ����ȴ�.
4. ǥ������ ����, ����, ���� Ÿ���� ���� �� ����

- ������� �������� ���� ������ �� �ϳ��� �����ϴ� ��Ȳ���� ����ϱ� ��
- �ڵ��� �������� ���� ȿ������ ������ �� ������ ǥ������ ������ �ִ�.

**
- break?
�� �ݺ����̳� switch���� ������ �� ���
�� break�� ����Ǹ� �ش� ������ switch���� �����ϰ� break �������� �̵��Ͽ� ����ȴ�.
�� ���� switch�� ��ø �ݺ��������� break�� �ִ� �ش� �������� ����������! �ٷ� ���ΰ� �ִ�!!!

switch (switch_on)
	{
	default:
		break;
	}

switch (ǥ����)
{
	case ��(�����):
		// ����� ����
		break;
	case ��(�����):
		// ����� ����
		break;
	default: // else
		// � case���� �ش����� ���� �� ����ȴ�.(��������)
		break;
	}

*/

#include<iostream>

int main() {
	/*std::cout << "������ �����ϼ���!" << std::endl;
	std::cout << "1. ������ġ" << std::endl;
	std::cout << "2. �߷ζ�Ʈ" << std::endl;
	std::cout << "3. ��ƺ��" << std::endl;
	std::cout << "4. ��Ÿ" << std::endl;
	std::cout << "5. ��" << std::endl;

	int Choice;

	std::cin >> Choice;
	switch (Choice)
	{
	case 1:
		std::cout << "������ġ�� ����!" << std::endl;
		break;
	case 2:
		std::cout << "�߷ζ�Ʈ�� ����!" << std::endl;
		break;
	case 3:
		std::cout << "��ƺ�θ� ����!" << std::endl;
		break;
	case 4:
		std::cout << "��Ÿ�� ����!" << std::endl;
		break;
	case 5:
		std::cout << "���� ����!" << std::endl;
		break;
	default:
		std::cout << "1~5������ ���� ����" << std::endl;
		break;
	}

	int jobSelect, SkillSelect;

	std::cout << "������ �����ض� (1:������, 2:���, 3:�����)";
	std::cin >> jobSelect;

	switch (jobSelect)
	{
	case 1:
		std::cout << "�����縦 �����ߴ�. � ��ų�� ����ұ�? (1:���̾, 2:���̽���)";
		std::cin >> SkillSelect;
		switch (SkillSelect)
		{
		case 1:
			std::cout << "���̾ ����!" << std::endl;
			break;
		case 2:
			std::cout << "���̽��� ����!" << std::endl;
			break;
		default:
			break;
		}
		break;
	case 2:
		std::cout << "��縦 �����ߴ�. � ��ų�� ����ұ�? (1:���а���, 2:�⺻����)";
		std::cin >> SkillSelect;
		switch (SkillSelect)
		{
		case 1:
			std::cout << "���а��� ����!" << std::endl;
			break;
		case 2:
			std::cout << "�⺻���� ����!" << std::endl;
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}*/

	std::srand(std::time(NULL)); // ����!!!
	// 0~RAND_MAX��
	int random = std::rand() % 9; // 0~8
	int random2 = std::rand() % 9 + 1; // 1~9
	std::cout << random << std::endl;
}