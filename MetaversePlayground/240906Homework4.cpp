#include<iostream>
using namespace std;


void IndexPick() {
	int index;
	// �ߺ� �� �ٽ� �̱�
	bool isSame;
	do {
		index = rand() % 48;
		isSame = false;
		for (int i = 0;i < 48;i++) {
			
		}
	} while (isSame == true);
	cout << "ī�带 �̾ҽ��ϴ�.\n���� �ε��� : " << index << "\n";

}

// ���þ� ��ȯ �Լ�
// �Ű����� : ������� ������
// ��ȯ�� : ���þ�
int MoneyBetMoney(int money) {
	while (money > 100) {
		cout << "������ : " << money << "\n���ñݾ� : ";
		int bet;
		cin >> bet;
		if (bet > money) {
			cout << "���� ����. �ٽ��Է��ϼ���\n";
			continue;
		}
		else if (bet < 100) {
			cout << "�ּ� ���þ��� 100���Դϴ�\n";
			continue;
		}
		return bet;
	}
}

int main() {
	// [�����帧]
	// 1. �Ļ� ���ο� Ƚ�� Ȯ��
	// 2. ���� �ε��� �迭 ����(���� ��ü���� ���)
	// 2. 3���� ī�� �̱�(�迭 ���� �����ͷθ� ����)
	// 3. ����
	// 4. ��� ��� �� ������ ����
	// ���� �ݺ�
	// 5. ���� ����

	int money = 10000;
	int minMoney = 100;
	int count = 0;
	cout << "~~������ ����~~\n";
	srand(time(NULL));

	// 1. �����ݰ� Ƚ�� Ȯ��
	while (money >= minMoney || count <= 16) {
		// �Ǽ� ���
		count++;
		cout << "==== " << count << "�� ° ====\n";
		int usedIndex[48];
		// 2. ī�� 3�� �̱�
		for (int i = 0;i < 3;i++) {
			IndexPick();
		}
		// 3. ���þ� ��ȯ
		int bet = MoneyBetMoney(money);
	}

	// 5. ��������
	cout << "����..";	
}