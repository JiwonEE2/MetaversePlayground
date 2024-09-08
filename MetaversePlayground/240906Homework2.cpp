/*
ī����� (������)

����
1. ���� ����
2. �ּ� ���� �ݾ� 100��
3. �̱�� +*2, ���� -*2

����
1. �� ����

��
1. 48���� ī��
2. �ѹ��� 3�徿 16�� ����
3. ���� ī��� �ٽ� ������� �ʴ´�(�ε��� ����x)
4. �������� ���� ī���� ���ڰ� ������ �� ���� ���̿� ������ �¸�
5. ����� �������. �� ���� ī��� 4�徿 ����
*/

#include<iostream>
using namespace std;

// �����ϴ� �Լ�
void game(int money, int bet) {
	int use[48];
	int count = -1;
	// �ε����� �ߺ����� �ʰ� 3�� �̱�
	int index[3];
	for (int i = 0;i < 3;i++) {
		index[i] = pickIndex(use);

	}

	// ������ ī�尡 ���̿� �ִ� �� Ȯ���ϰ� �¸� �й� ��ȯ�ϱ�
	bool isWin = betweenCheck(index);

	// ���п� ���� ������ ���� �� �ؽ�Ʈ ���
	winOrLose(isWin, money, bet);
}

// �ε��� �̱�(ī�� x), �ߺ��̸� �ٽ� �̱�, ���� Ƚ��
// �Ű����� : ���� �ε���
// ��ȯ : ���� �ε���
int pickIndex(int use[48]) {
	srand(time(NULL));
	int pick;
	// �̱� �� �ߺ� Ȯ��, ���� Ƚ�� Ȯ��
	bool isSame;
	do {
		pick = rand() % 48;				// �ϴ� �̰�
		isSame = false;					// �⺻���� false
		for (int i = 0;i < 48;i++) {
			if (use[i] == pick) {		// �ߺ��̸�
				isSame = true;			// �ߺ� ǥ�� ��
				break;					// �ٽ� ������ ����(for�� Ż�� -> do while�� �ٽ� ����)
			}							// �ߺ��� ������ ã�� �ߺ��� ������ ������ false �״��
		}
	} while (isSame == true);

	// ���� ���� �ߺ��� ����

	return pick;		// ���� ���� ��ȯ
}

bool betweenCheck(int index[3]) {
	int card[48] = { 1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,6,6,6,6,7,7,7,7,8,8,8,8,9,9,9,9,10,10,10,10,11,11,11,11,12,12,12,12 };
	int number[3];
	// ���� �ε���(3��)�� ī�忡 ����
	for (int i = 0;i < 3;i++) {
		number[i] = card[index[i]];
	}

	// ���� �� �� ���� ������ ����
	if (number[1] > number[2]) {
		int temp = number[1];
		number[1] = number[2];
		number[2] = temp;
	}

	if (number[3] <= number[1] || number[3] >= number[2]) {
		return false;	// ���� false
	}
	else {
		return true;	// �̱�� true
	}
}

void winOrLose(bool isWin, int money, int bet) {
	if (isWin == true) {
		money += (bet * 2);
		cout << "�¸��Ͽ� " << bet * 2 << "���� �������ϴ�.\n������ : " << money << "\n";
	}
	else {
		money -= (bet * 2);
		cout << "�й��Ͽ� " << bet * 2 << "���� �Ҿ����ϴ�.\n������ : " << money << "\n";
	}
}

int main() {
	int bet, money = 10000;
	cout << "~~ī����� ����~~\n";

	while (money > 100) {
		cout << "������ : " << money << "\n���ñݾ� : ";
		cin >> bet;
		if (bet > money) {
			cout << "���� ����. �ٽ��Է��ϼ���\n";
			continue;
		}
		if (bet < 100) {
			cout << "�ּ� ���þ��� 100���Դϴ�\n";
			continue;
		}
		// ���� ����
		game(money, bet);
	}
	cout << "�Ļ�..";
}