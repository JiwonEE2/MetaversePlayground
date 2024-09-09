#include<iostream>
using namespace std;


void BetweenCheck() {
	

}

// 베팅액 반환 함수
// 매개변수 : 사용자의 소지금
// 반환값 : 베팅액
int MoneyBetMoney(int money) {
	while (money > 100) {
		cout << "소지금 : " << money << "\n베팅금액 : ";
		int bet;
		cin >> bet;
		if (bet > money) {
			cout << "돈이 부족. 다시입력하세요\n";
			continue;
		}
		else if (bet < 100) {
			cout << "최소 베팅액은 100원입니다\n";
			continue;
		}
		return bet;
	}
}

int main() {
	// [게임흐름]
	// 1. 파산 여부와 횟수 확인
	// 2-1. 사용된 인덱스 배열 선언(메인 전체에서 사용)
	// 2-2. 3개의 카드 뽑기(배열 전달 포인터로만 가능)
	// 2-3. 인덱스1, 2 오름차순 정렬
	// 2-4. 결과 계산
	// 3. 베팅
	// 4. 결과 출력 및 소지금 수정
	// 위를 반복
	// 5. 게임 종료

	int money = 10000;
	int minMoney = 100;
	int count = 0;
	cout << "~~월남뽕 시작~~\n";
	srand(time(NULL));

	// 1. 소지금과 횟수 확인
	while (money >= minMoney || count <= 16) {
		// 판수 출력
		count++;
		cout << "==== " << count << "판 째 ====\n";
		int usedIndex[48];
		// 2. 중복 없이 카드 3개 뽑기
		int index[3];
		bool isSame;		
		for (int i = 0;i < 3;i++) {
			// 중복 시 다시 뽑기
			do {
				index[i] = rand() % 48;
				isSame = false;
				for (int j = 0; j < 48; j++) {
					if (usedIndex[j] == index[i]) {
						isSame = true;
						break;
					}
				}
			} while (isSame == true);
			cout << "카드를 뽑았습니다.\n뽑힌 인덱스 : " << index[i]<< "\n";
			// 사용된 인덱스에 저장
			usedIndex[count * 3 - (3 - i)] = index[i];
		}
		// 2-3. 인덱스1, 2 오름차순 정렬
		if (index[0] > index[1]) {
			int temp = index[0];
			index[0] = index[1];
			index[1] = temp;
		}
		cout << "정렬된 인덱스 : " << index[1] << ", " << index[2] << "\n";
		
		// 3. 베팅액 반환
		int bet = MoneyBetMoney(money);

		// 4. 결과 출력
		BetweenCheck();
	}

	// 5. 게임종료
	cout << "종료..";	
}