#include<iostream>

using namespace std;
int main() {
	srand(time(NULL));

	int number[10];

	int dest, sour, temp;

	// 배열 초기화
	for (int i = 0; i < 10; i++) {
		number[i] = i + 1;
	}
	cout << "셔플 전 : " << endl;
	for (int i = 0; i < 10; i++) {
		cout << "number[" << i << "]인덱스 : " << number[i] << endl;
	}

	// 섞어볼까요
	for (int i = 0; i < 1000; i++) {
		dest = rand() % 10; // 0~9
		sour = rand() % 10; // 0~9

		// 선택된 두 인덱스(dest,sour)에 해당하는 배열 요소 교환
		// temp변수를 사용해서 값을 임시로 저장
		temp = number[dest];
		number[dest] = number[sour];
		number[sour] = temp;
	}
	cout << "셔플 후!" << endl;
	for (int i = 0; i < 10; i++) {
		cout << "number[" << i << "]인덱스 : " << number[i] << endl;
	}
}