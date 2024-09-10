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
	// 1-1. 테이블 자료형이 char 배열인 방법 -> 셔플이 가능한가? x 귀찮아짐.
	// 1-2. 테이블 자료형이 구조체인 방법 vv 이걸로 진행해보자
	// 2. 셔플
	// 3. 빙고확인
	// 4. 입력
	// 5-1. input이 있는 위치 찾기
	// 5-2. 출력(막힘표시)
	// 3~5 반복

	// 0. 시작
	cout << "~~~ 빙고게임 ~~~\n\n";

	// 1. 테이블 생성
	int table[25];
	for (int i = 0; i < 25; i++) {
		table[i] = i;
		// 1-1. 테이블 표시(for문까지)
		cout << table[i] << "\t";
		if (i % 5 == 4) {
			cout << "\n";
		}
	}

	// 2. 셔플
	srand(time(0));
	TableShuffle(table);
	// 
	//// 셔플 확인용!
	//for (int i = 0; i < 25; i++) {
	//	cout << table[i] << endl;
	//}
	//

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
	//
	//// input 위치 확인용!
	//cout << index;
	//
}