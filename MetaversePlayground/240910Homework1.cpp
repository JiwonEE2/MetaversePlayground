/* 240910 실습1

[ 포인터를 이용한 합계 구하기 ]
1. 10개의 정수로 초기화된 배열을 선언
2. 포인터로 계산
*/

#include<iostream>
using namespace std;

int main() {
	int nums[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int* parr = nums;				// 포인터를 배열 주소로 초기화
	int sum = 0;
	while (parr - nums < 10) {		// 포인터가 배열의 끝을 넘지 않을 때까지 반복
		sum += *parr;				// 현재 포인터가 가리키는 값을 누적
		parr++;						// 포인터를 다음 요소로 이동
	}
	cout << "평균 : " << sum << endl;

	// 내코드
	/*
	int* parr = &nums[0];			// nums[0]의 주소값을 포인터에 저장
	int sum = 0;

	for (int i = 0; i < 10; i++) {
		sum += *parr + i;
		cout << sum << endl;
	}*/
}