/*
if
- ���ǹ��̶�� �ϸ�, ���α׷��� ���� �帧�� �����ϴ� �� ���
- ���ǹ��� �־��� ������ true, false������ ���� �ڵ� ����� �����ϰ� �ȴ�.


if (// ���Ⱑ ���̶��(������)) {
		// ���⸦ �����϶�
}
1. if���� ���� ������ ����.(���������� ��� ����)
2. if���� ���ǽ��� ���� �˻��Ѵ�.
3. else�� ���� �ִ� if���� �����̸� �����Ѵ�.
4. else�� �ܵ����� ����� �Ұ����ϰ� �������� ����� �Ұ����ϴ�.
5. else if�� if~if������ �ٸ��� ���� ���� �� �� �Ʒ��� �ִ� �ڵ�(���ǽ�)�� �˻����� �ʴ´�.
6. if���� ��ø ����
*/

#include<iostream>

int main() {
	//if (true/*����*/) // ���Ⱑ ���̶��
	//{
	//	// ����
	//	// ������ ���� �� ����Ǵ� �ڵ�
	//}

	if (true)
	{
		std::cout << "������ ���̸� ���Ⱑ ����ȴ�" << std::endl;
	}

	int num = 10;

	// ���� num�� 10���� ���ų� ũ�ٸ�
	if (num < 10) {
		std::cout << "ù��° if�� ����" << std::endl;
	}
	// OK
	// �� ������ �����̰� �Ʒ��� ���� �����̶��
	else if (num == 10) {
		std::cout << "�ι�° if�� ����" << std::endl;
	}
	// OK
	else if (num <= 10) {
		std::cout << "����° if�� ����" << std::endl;
	}
	else {
		std::cout << "�� ������ ���� �������� �ʴ´ٸ� else�� �����Ѵ�." << std::endl;
	}

	int num1 = 50;
	// ���࿡ ������ ���̸�
	if (num1==51)
	{
		std::cout << "num1�� 51�̸� ����" << std::endl;
	}
	else
	{
		std::cout << "�� ������ �����̸� ���⸦ ����" << std::endl;

		// ���� �ִ� ������ �����̸� ���⸦ ����
	}

	if (true) {

	}
	else if (true/*����*/) {

	}
	else if (true/*����*/) {

	}

	int input;
	std::cin >> input;
	
	// �Է��� ���� 2�� ���� �������� 0�̶��
	if ((input % 2) == 0) {
		std::cout << " ¦�� " << std::endl;
	}
	/*if ((input % 2) != 0) {

	}
	else {

	}*/
	
	int input1;
	std::cin >> input1;

	if (input1 > 0) // �Է��� ���� ���
	{
		// ¦�����
		if (input % 2 == 0) {
			// ������� �Դٶ�� �� �Է��� ���� ��� && ¦��
			if (true) {

			}
		}
		else {
			// Ȧ��

		}
	}

	// ���Ϳ� �÷��̾� ü�� ����
	int playerHealth = 100;
	int monsterHealth = 100;

	// ���� ���ݷ� ����
	int monsterAttack = 10;

	// �̰� �Է����� ó��
	int playerAttack = 0;

	std::cout << "���濡 ����� ���Դ�" << std::endl;

	// ���� ��������?
	// std::cout << "�÷��̾ ����� ����" << std::endl;

	// ������ �ϴµ�.. ����� ü���� 0 �̸��̸� �ȵǴϱ�
	if (monsterHealth > 0) {
		std::cout << "�÷��̾��� ���ݷ��� �Է��ϼ��� : ";
		std::cin >> playerAttack;

		std::cout << "����� �����Ѵ�" << std::endl;
		// �÷��̾� ü�� ���
		playerHealth -= monsterAttack;
		// ��� ü�� ���
		monsterHealth -= playerAttack;

		// ���� �÷��̾ ��� �ִٸ�
		if (playerHealth > 0) {
			std::cout << "�÷��̾��� ���� ü�� : " << playerHealth << std::endl;
			std::cout << "����� ���� ü�� : " << monsterHealth << std::endl;
		}
		else {
			std::cout << "�÷��̾ ����" << std::endl;
		}
	}
	else {
		std::cout << "����� �׾���." << std::endl;
	}
}