/* 240905 과제
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

2. for문을 이용해서 구구단을 출력(2~9단)
3. while을 이용해서 원하는 구구단 출력
ㄴ 2를 입력하면 2단이 출력

4. 가위바위보 업그레이드하기
- 가위바위보의 종료조건
ㄴ 판수는 10판으로 제한
ㄴ 베팅액이 소지금보다 큰 경우
ㄴ 소지금보다 최소금액이 더 클 때

- 플레이어는 소지금(만원)
- 베팅 가능.(소지금보다 큰 금액 불가, 최소 베팅액은 100원)
- 만약에 이겼다 -> 내가 베팅한 금액*2
- 비겼다 -> 그냥 베팅한 금액만 잃음
- 졌다 -> 베팅한 금액에 *2 잃음

*/

#include<iostream>

int main() {
    // 과제1-1
    std::cout << "===== 과제1 =====" << std::endl;
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

    // 과제1-2
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

    // 과제1-3
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // 과제2
    std::cout << "===== 과제2 =====" << std::endl;
    for (int i = 2; i < 10; i++) {
        std::cout << "[ " << i << "단 ]" << std::endl;
        for (int j = 1; j < 10; j++) {
            std::cout << i << " X " << j << " = " << i * j << std::endl;
        }
        std::cout << std::endl;
    }

    // 과제3
    std::cout << "===== 과제3 =====" << std::endl;
    int num;
    while (true) {
        std::cout << "몇 단을 출력할까요? ";
        std::cin >> num;
        std::cout << "[ " << num << "단 ]" << std::endl;
        for (int i = 1; i < 10; i++) {
            std::cout << num << " X " << i << " = " << num * i << std::endl;
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    // 과제4
    std::cout << "===== 과제4 =====" << std::endl;
    int money = 10000;
    int betnum = 1;
    while (betnum <= 10 && money>100) {
        int bet;
        int input;
        std::cout << "소지금 : " << money << "\n베팅금액 : ";
        std::cin >> bet;
        if (bet < 100) {
            std::cout << "최소 베팅 금액은 100원입니다.\n";
            continue;
        }
        else if (bet > money) {
            std::cout << "소지금이 부족합니다.\n";
            continue;
        }
        std::cout << "\n!!!베팅 시작!!!\n(1:가위, 2 : 바위, 3 : 보)\n당신 : ";
        std::cin >> input;

        std::srand(std::time(NULL));
        int computer = std::rand() % 3 + 1; // 1~3까지의 난수 생성
        int result;
        std::cout << "컴퓨터 : ";
        switch (computer) {
        case 1:
            std::cout << "가위\n";
            break;
        case 2:
            std::cout << "바위\n";
            break;
        case 3:
            std::cout << "보\n";
            break;
        }

        if (input == computer) {
            std::cout << "비겼습니다" << std::endl;
            money -= bet;
        }
        else if (input - computer == 1 || input - computer == -2) {
            std::cout << "승리" << std::endl;
            money += (bet * 2);
        }
        else if (input - computer == -1 || input - computer == 2) {
            std::cout << "패배" << std::endl;
            money -= (bet * 2);
        }
        else {
            std::cout << "1~3만 선택해 주세요." << std::endl;
        }
        betnum++;
        std::cout << std::endl;
    }
}