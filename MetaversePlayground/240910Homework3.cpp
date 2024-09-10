/* 240910 과제1
[ 빙고게임 ]
- 크기 : 5 x 5 (1,2차원 상관없다)
ex) 10 입력 시 10이 들어간 부분 막힘 표시
- 종료 조건 : 빙고3
*/
#include<iostream>
using namespace std;

void TableShuffle(int table[]) {
	int dest, temp;
	for (int i = 0; i < 25; i++) {
		dest = rand() % 25;
		temp = table[dest];
		table[dest] = table[i];
		table[i] = temp;
	}
}

int main() {
	// 1. 테이블 생성
	// 2. 셔플
	// 3. 빙고확인
	// 4. 입력
	// 5-1. input이 있는 위치 찾기
	// 5-2. 출력(막힘표시)
	// 3~5 반복

	// 1. 테이블 생성
	int table[25] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24 };
	cout << "~~~ 빙고게임 ~~~\n\n□□□□□\n□□□□□\n□□□□□\n□□□□□\n□□□□□\n";

	// 2. 셔플
	srand(time(0));
	TableShuffle(table);
	/* 
	// 셔플 확인용!
	for (int i = 0; i < 25; i++) {
		cout << table[i] << endl;
	}
	*/

	// 3. 빙고확인
	
	// 4. 입력받기
	int input;
	cout << "0~24 사이의 숫자를 하나 선택해 주세요 : ";
	cin >> input;
	// 4-2. 0~24 사이의 수를 선택하지 않은 경우

	// 5-1. input이 있는 위치 찾기
	int index;
	for (int i = 0; i < 25; i++) {
		if (table[i] == input) {
			index = i;
		}
	}
	/*
	// input 위치 확인용
	cout << index;
	*/
}