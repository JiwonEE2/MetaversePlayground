#include<iostream>
using namespace std;
/*	240906 실습2
2. 사용자가 입력한 최대값과 최소값(함수)
	ex) 5,1
	출력 : 최대값은 5, 최소값 1
	현재 5개만 받는 문제. 
	초반에 몇개 받을 건지 입력받고 배열 할당하려면 동적할당 해야한다.
*/

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

int main() {
	MinMax();
}