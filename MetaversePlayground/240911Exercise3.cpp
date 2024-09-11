#include<iostream>
using namespace std;
/*	240911 실습3
3. 문자열 내 특정 문자 갯수 찾기
ex) input : aabbccddddd
	내가 찾으려고 하는 문자 : d
	output : 5
	1. 입력을 받는다
	2. 내가 찾으려고 하는 문자를 입력받는다
	3. 찾는 로직을 만든다
	4. 1에서 입력한 문자열의 길이만큼
	4-2. 만약 내가 찾으려고 하는 문자와 ?? 가 같다면
	같은 문자를 카운팅 해주는 어떤..
*/

int main() {
	cout << "문자열을 입력하세요 : ";
	string input;
	cin >> input;

	cout << "내가 찾으려고 하는 문자 : ";
	char charInput;
	cin >> charInput;

	int count = 0;
	for (int i = 0; i < input.length(); i++) {
		if (input[i] == charInput) {
			count++;
		}
	}
	cout << charInput << "의 개수는 : " << count << "\n";
}