#include<iostream>
using namespace std;


void BetweenCheck() {
	

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
	// 2-1. ���� �ε��� �迭 ����(���� ��ü���� ���)
	// 2-2. 3���� ī�� �̱�(�迭 ���� �����ͷθ� ����)
	// 2-3. �ε���1, 2 �������� ����
	// 2-4. ��� ���
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
		// 2. �ߺ� ���� ī�� 3�� �̱�
		int index[3];
		bool isSame;		
		for (int i = 0;i < 3;i++) {
			// �ߺ� �� �ٽ� �̱�
			do {
				index[i] = rand() % 48;
				isSame = false;
				for (int j = 0; j < 48; j++) {
					if (usedIndex[j] == index[i]) {
						isSame = true;
						break;
					}
				}
			} while (isSame == true);
			cout << "ī�带 �̾ҽ��ϴ�.\n���� �ε��� : " << index[i]<< "\n";
			// ���� �ε����� ����
			usedIndex[count * 3 - (3 - i)] = index[i];
		}
		// 2-3. �ε���1, 2 �������� ����
		if (index[0] > index[1]) {
			int temp = index[0];
			index[0] = index[1];
			index[1] = temp;
		}
		cout << "���ĵ� �ε��� : " << index[1] << ", " << index[2] << "\n";
		
		// 3. ���þ� ��ȯ
		int bet = MoneyBetMoney(money);

		// 4. ��� ���
		BetweenCheck();
	}

	// 5. ��������
	cout << "����..";	
}