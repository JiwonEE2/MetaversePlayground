#include<iostream>
using namespace std;
// ���� �ݾ� Ȯ�� �Լ�
// �Ű����� : ������� ������
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
	// 1. �Ļ� ���� Ȯ�� �� ����
	int money = 10000;
	cout << "~~ī����� ����~~\n";
	int bet = MoneyBetMoney(money);


	cout << "�Ļ�..";
}