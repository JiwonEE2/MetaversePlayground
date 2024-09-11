#include<iostream>
using namespace std;
/*	240906 과제1
1. 숫자야구게임(배열)
	랜덤하게 숫자를 3개 뽑는다(0~9)
	1,5,3
	ㄴ 1,3,5
	결과는 1s2b
	종료조건 : 3s, 1out

1. 숫자 3개 랜덤으로 뽑기 -> 배열 사용
2. 숫자 3개 입력받기
3. 결과 출력하기
4. 종료조건 확인하고 false면 반복

*/
void ComputerPick() {
	int computerNumber[3], computerUsed[3] = { -1,-1,-1 };	// 초기화하지 않으면 전부 0이 되어서 중복 확인할 때 문제가 생긴다
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			do{
				computerNumber[i] = rand() % 10;
			} while (computerUsed[j] == computerNumber[i]);
		}
	}
}


void baseball() {
	cout << "숫자야구 시작\n";

	// 1. 숫자 3개 중복없이 랜덤으로 뽑아 배열에 차례로 할당하기
	int computerNumber[3], computerUsed[3] = { -1,-1,-1 };	// 초기화하지 않으면 전부 0이 되어서 중복 확인할 때 문제가 생긴다
	srand(time(0));

	ComputerPick();
	

	int input[3], strike, ball;

	/*computerNumber[0] = -1;
	for (int i = 1; i <= 3; i++) {
		do {
			computerNumber[i] = rand() % 10;
		} while (computerNumber[i] == computerNumber[i - 1] || computerNumber[i] == computerNumber[i - 2] && i >= 2);
		cout << "com의 숫자 : " << computerNumber[i] << "\n";
	}*/

	do {
		strike = 0, ball = 0;
		input[0] = 0;
		for (int i = 1; i <= 3; i++) {
			cin >> input[i];
		}

		for (int i = 1; i <= 3; i++) {
			for (int j = i; j <= 3; j++) {
				if (input[i] == computerNumber[j]) {
					if (i == j) {
						strike++;
					}
					else {
						ball++;
					}
				}
			}
		}
		cout << strike << "S " << ball << "B\n";
	} while (strike + ball != 0 && strike != 3);
}

int main() {
	baseball();
}