#include<iostream>
using namespace std;
/*	240911 실습2
2. 스트링 클래스를 이용하여 문자열을 뒤집는다.(reverse) (*. C 스타일로 해보기)
ex) input : abcde -> output : edcba
*/

int main() {
	string str = "Hello";
	reverse(str.begin(), str.end());
	cout << str;
}