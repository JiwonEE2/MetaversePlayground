/* 240910 과제1
[ 빙고게임 ]
- 크기 : 5 x 5 (1,2차원 상관없다)
ex) 10 입력 시 10이 들어간 부분 막힘 표시
- 종료 조건 : 빙고3
*/
#include<iostream>
using namespace std;

struct Table {
	int number;
	char display;
};

void TableShuffle(Table table[]) {
	int dest;
	Table temp;
	for (int i = 0; i < 25; i++) {
		dest = rand() % 25;
		temp = table[dest];
		table[dest] = table[i];
		table[i] = temp;
	}
}

int main() {	
	// 1. 테이블 생성
	// 1-1. 테이블 자료형이 char 배열인 방법 -> 셔플이 가능한가? x 귀찮아짐.
	// 1-2. 테이블 자료형이 구조체인 방법 vv 이걸로 진행해보자
	// 2. 셔플
	// 3. 빙고확인
	// 4. 입력
	// 5. input이 있는 위치 찾기
	// 6. 출력(막힘표시)
	// 3~6 반복

	// 0. 시작
	cout << "~~~ 빙고게임 ~~~\n\n";

	// 1. 테이블 생성
	Table table[25];
	for (int i = 0; i < 25; i++) {
		table[i].number = i;
		table[i].display = 'O';
		// 1-1. 테이블 표시(for문까지)
		cout << table[i].display;
		if (i % 5 == 4) {
			cout << "\n";
		}
	}

	// 2. 셔플
	srand(time(0));
	TableShuffle(table);
	/*
	// 셔플 확인용!
	for (int i = 0; i < 25; i++) {
		cout << table[i].number << endl;
	}
	*/

	while (true) {
		// 3. 빙고확인

		// 4. 입력받기
		int input;
		cout << "\n0~24 사이의 숫자를 하나 선택해 주세요 : ";
		cin >> input;
		// 4-1. 중복된 수를 선택한 경우
		// 4-2. 0~24 사이의 수를 선택하지 않은 경우

		// 5. input이 있는 위치 찾기
		int index;
		for (int i = 0; i < 25; i++) {
			if (table[i].number == input) {
				index = i;
			}
		}
		/*
		// input 위치 확인용
		cout << index;
		*/

		// 6. 막힘 표시하고 테이블 출력하기
		table[index].display = 'X';
		for (int i = 0; i < 25; i++) {
			cout << table[i].display;
			if (i % 5 == 4) {
				cout << "\n";
			}
		}
	}	
}