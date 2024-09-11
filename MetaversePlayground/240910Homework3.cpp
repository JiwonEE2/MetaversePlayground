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

// 3. 입력 받는 함수
int UserInput(Table table[]) {
	int input;
	cout << "\n0~24 사이의 숫자를 하나 선택해 주세요 : ";
	cin >> input;
	// 3-1. 중복된 수를 선택한 경우(배열 받지 말고, *인지 0인지 확인하면 더 간단할 듯)
	for (int i = 0; i < 25; i++) {
		if (table[i].number == input && table[i].display == '*') {
			cout << "이미 선택했던 수입니다. 다른 수를 입력하세요\n";
		}
	}
	// 3-2. 0~24 사이의 수를 선택하지 않은 경우 (break나 continue 등이 없기 때문에 제대로된 오류 방지가 안되는 상태)
	if (input < 0 || input>24) {
		cout << "0과 24사이의 수를 선택하세요\n";
	}

	return input;
}

// 4. input 위치 찾는 함수
int FindInput(int input, Table table[]) {
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
	return index;
}

int BingoCheck(int count, Table table[]) {
	// 3. 빙고확인
		// 빙고의 경우의 수(경우일 땐 count++)
		// (가로(5개)) 01234 / 56789 / ...	: %5==0부터 5개 연속
		// (세로(5개))	0	1
		//				5	6
		//				10	11
		//				15	16
		//				20	21		/ ...	: 5개 간격으로 연속 -> ??
		// (대각선1(1개)) 0 6 12 18 24		: 0부터 6개 간격이거나
		// (대각선2(1개)) 4 8 ...			: 4부터 4개 간격이거나
	int temp = 0;

	// 가로로 5개 경우
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (table[j + 5 * i].display == '*') {
				temp++;
			}
		}
		if (temp == 5) {
			count++;
		}
		temp = 0;
	}

	// 세로로 5개 경우
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (table[i + 5 * j].display == '*') {
				temp++;
			}
		}
		if (temp == 5) {
			count++;
		}
		temp = 0;
	}

	// 대각선1 : 0부터 6개 간격
	for (int i = 0; i < 25; i += 6) {
		if (table[i].display == '*') {
			temp++;
		}
	}
	if (temp == 5) {
		count++;
	}
	temp = 0;

	// 대각선2 : 4부터 4개 간격
	for (int i = 4; i < 25; i += 4) {
		if (table[i].display == '*') {
			temp++;
		}
	}
	if (temp == 5) {
		count++;
	}
	temp = 0;

	return count;
}

int main() {
	// 1. 테이블 생성
	// 1-1. 테이블 자료형이 char 배열인 방법 -> 셔플이 가능한가? x 귀찮아짐.
	// 1-2. 테이블 자료형이 구조체인 방법 vv 이걸로 진행해보자
	// 2. 셔플
	// 4. 입력
	// 5. input이 있는 위치 찾기
	// 6. 출력(막힘표시)
	// 3. 빙고확인
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

	// 3. 빙고 횟수 3회 이상일 시 종료할 while문
	int count = 0;
	while (count < 3) {
		// 3. 입력받기
		int input = UserInput(table);

		// 4. input이 있는 위치 찾기
		int index = FindInput(input,table);		

		// 5. 막힘 표시하고 테이블 출력하기
		table[index].display = '*';
		for (int i = 0; i < 25; i++) {
			cout << table[i].display;
			if (i % 5 == 4) {
				cout << "\n";
			}
		}

		count = 0;
		// 3. 빙고확인
		// 빙고의 경우의 수(경우일 땐 count++)
		// (가로(5개)) 01234 / 56789 / ...	: %5==0부터 5개 연속
		// (세로(5개))	0	1
		//				5	6
		//				10	11
		//				15	16
		//				20	21		/ ...	: 5개 간격으로 연속 -> ??
		// (대각선1(1개)) 0 6 12 18 24		: 0부터 6개 간격이거나
		// (대각선2(1개)) 4 8 ...			: 4부터 4개 간격이거나
		count = BingoCheck(count, table);
		cout << "\n빙고 개수 : " << count << "\n";
	}
}