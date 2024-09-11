#include<iostream>
using namespace std;
/*	240906 실습1
1. 사용자가 입력한 양의 정수의 각 자리수의 합(함수)
	ex) 15248 -> 1+5+2+4+8
*/

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

int main() {
	sum();
}