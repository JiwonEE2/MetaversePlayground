/* 240905 ����
1.
*****
 ****
  ***
   **
    *

    *
   **
  ***
 ****
*****

*****
****
***
**
*

2. for���� �̿��ؼ� �������� ���(2~9��)
3. while�� �̿��ؼ� ���ϴ� ������ ���
�� 2�� �Է��ϸ� 2���� ���

4. ���������� ���׷��̵��ϱ�
- ������������ ��������
�� �Ǽ��� 10������ ����
�� ���þ��� �����ݺ��� ū ���
�� �����ݺ��� �ּұݾ��� �� Ŭ ��

- �÷��̾�� ������(����)
- ���� ����.(�����ݺ��� ū �ݾ� �Ұ�, �ּ� ���þ��� 100��)
- ���࿡ �̰�� -> ���� ������ �ݾ�*2
- ���� -> �׳� ������ �ݾ׸� ����
- ���� -> ������ �ݾ׿� *2 ����

*/

#include<iostream>

int main() {
    // ����1-1
    std::cout << "===== ����1 =====" << std::endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < 5 - i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    // ����1-2
    for (int i = 0; i < 5; i++) {
        for (int j = 1; j < 5 - i; j++) {
            std::cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    // ����1-3
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // ����2
    std::cout << "===== ����2 =====" << std::endl;
    for (int i = 2; i < 10; i++) {
        std::cout << "[ " << i << "�� ]" << std::endl;
        for (int j = 1; j < 10; j++) {
            std::cout << i << " X " << j << " = " << i * j << std::endl;
        }
        std::cout << std::endl;
    }

    // ����3
    std::cout << "===== ����3 =====" << std::endl;
    int num;
    while (true) {
        std::cout << "�� ���� ����ұ��? ";
        std::cin >> num;
        std::cout << "[ " << num << "�� ]" << std::endl;
        for (int i = 1; i < 10; i++) {
            std::cout << num << " X " << i << " = " << num * i << std::endl;
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    // ����4
    std::cout << "===== ����4 =====" << std::endl;
    int money = 10000;
    int betnum = 1;
    while (betnum <= 10 && money>100) {
        int bet;
        int input;
        std::cout << "������ : " << money << "\n���ñݾ� : ";
        std::cin >> bet;
        if (bet < 100) {
            std::cout << "�ּ� ���� �ݾ��� 100���Դϴ�.\n";
            continue;
        }
        else if (bet > money) {
            std::cout << "�������� �����մϴ�.\n";
            continue;
        }
        std::cout << "\n!!!���� ����!!!\n(1:����, 2 : ����, 3 : ��)\n��� : ";
        std::cin >> input;

        std::srand(std::time(NULL));
        int computer = std::rand() % 3 + 1; // 1~3������ ���� ����
        int result;
        std::cout << "��ǻ�� : ";
        switch (computer) {
        case 1:
            std::cout << "����\n";
            break;
        case 2:
            std::cout << "����\n";
            break;
        case 3:
            std::cout << "��\n";
            break;
        }

        if (input == computer) {
            std::cout << "�����ϴ�" << std::endl;
            money -= bet;
        }
        else if (input - computer == 1 || input - computer == -2) {
            std::cout << "�¸�" << std::endl;
            money += (bet * 2);
        }
        else if (input - computer == -1 || input - computer == 2) {
            std::cout << "�й�" << std::endl;
            money -= (bet * 2);
        }
        else {
            std::cout << "1~3�� ������ �ּ���." << std::endl;
        }
        betnum++;
        std::cout << std::endl;
    }
}