/* 240906 실습
1. 사용자가 입력한 양의 정수의 각 자리수의 합(함수)
	ex) 15248 -> 1+5+2+4+8
2. 사용자가 입력한 최대값과 최소값(함수)
	ex) 5,1
	출력 : 최대값은 5, 최소값 1

	240906 과제
1. 숫자야구게임(배열)
	랜덤하게 숫자를 3개 뽑는다(0~9)
	1,5,3
	ㄴ 1,3,5
	결과는 1s2b
	종료조건 : 3s, 1out

2. 카드게임(월남뽕)

*/
#include<iostream>
using namespace std;
void sum() {
	int input;
	cout << "계산할 수 : ";
	cin >> input;
	int sum = 0;
	while (input != 0) {
		sum += input % 10;
		input /= 10;
	}
	cout << "합 : " << sum << "\n";
}

void MinMax() {
	int nums[5];

	for (int i = 0; i < 5; i++) {
		cin >> nums[i];
	}

	int min = nums[1], max = nums[1];
	for (int i = 0; i < 5; i++) {
		if (nums[i] < min) {
			min = nums[i];
		}
		if (nums[i] > max) {
			max = nums[i];
		}
	}

	cout << "최대값 : " << max << "\n최소값 : " << min;
}

void baseball() {
	cout << "숫자야구 시작\n";
	int input[3], com[3], strike, ball;

	srand(time(NULL));
	com[0] = -1;
	for (int i = 1; i <= 3; i++) {
		do {
			com[i] = rand() % 10;
		} while (com[i] == com[i - 1] || com[i] == com[i - 2] && i >= 2);
		cout << "com의 숫자 : " << com[i] << "\n"; 
	}
	
	do {
		strike = 0, ball = 0;
		input[0] = 0;
		for (int i = 1; i <= 3; i++) {
			cin >> input[i];
		}

		for (int i = 1; i <= 3; i++) {
			for (int j = i; j <= 3; j++) {
				if (input[i] == com[j]) {
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
	} while (strike + ball != 0 && strike!= 3);
}

int main() {
	// 실습1
	//cout << "==== 실습1 ====\n";
	//sum();

	//// 실습2
	//cout << "==== 실습2 ====\n";
	//MinMax();

	// 과제1
	cout << "==== 과제1 ====\n";
	baseball();
}