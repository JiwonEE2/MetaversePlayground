/*	240913 과제1
[ 슬라이드 퍼즐 만들기 ]
0. welcome ^^
1. 셔플
2. 상태 출력
3. 0의 위치 반환하기
4. 입력 받기
5. 움직이기
6. puzzle class 에서 위 4가지 함수를 만들어 main의 while문을 사용하여 반복
- 4x4 크기
- wasd 사용
*/
#include<iostream>
using namespace std;

class Puzzle {
	int number[16];
	char key;
	int zeroIndex;
	int keyNum;

public:
	Puzzle() {
		for (int i = 0; i < 16; i++) {
			number[i] = i;
		}
	}
	// 1. 셔플
	void ShufflePuzzle() {
		int temp, ran;
		srand(time(0));
		for (int i = 0; i < 16; i++) {
			ran = rand() % 16;
			temp = number[i];
			number[i] = number[ran];
			number[ran] = temp;
		}
	}
	// 2. 상태 출력
	void DisplayPuzzle() {
		for (int i = 0; i < 16; i++) {
			cout << number[i] << "\t";
			if (i % 4 == 3) {
				cout << "\n";
			}

		}
	}
	// 3. 0의 위치 반환하기
	void ZeroWhere() {
		for (int i = 0; i < 16; i++) {
			if (number[i] == 0) {
				zeroIndex = i;
			}
		}
	}
	// 4. 입력 받기
	void InputKey() {
		cout << "wasd 키로 움직이세요\n";
		cin >> key;
		switch (key)
		{
			// -4 인덱스와 자리 바꾸기
		case 'w':
			keyNum = -4;
			break;
			// -1
		case 'a':
			keyNum = -1;
			break;
			// +4
		case 's':
			keyNum = +4;
			break;
			// +1
		case 'd':
			keyNum = +1;
			break;
		default:
			break;
		}
	}
	// 5. 움직이기
	void MoveZero() {
		int temp= number[zeroIndex +keyNum];
		number[zeroIndex + keyNum] = number[zeroIndex];
		number[zeroIndex] = temp;
	}
};

int main() {
	// 0. 생성
	Puzzle p;
	// 1. 셔플
	p.ShufflePuzzle();

	// 6. 반복
	while (true)
	{
		// 2. 상태 출력
		p.DisplayPuzzle();

		// 3. 0의 위치 받기
		p.ZeroWhere();

		// 4. 입력받기
		p.InputKey();

		// 5. 움직이기
		p.MoveZero();
	}
}