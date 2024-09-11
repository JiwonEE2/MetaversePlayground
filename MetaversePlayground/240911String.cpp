/*
string
- C++에서 제공하는 문자열을 다루기 위한 클래스
- C 스타일의 문자 배열 쉽고 안전하고 유용
- 문자열의 비교, 연결, 추출, 검색, 수정 다양한 멤버 함수들을 지원


*/


#include<iostream>
using namespace std;

int main() {
	string str = "Hello";
	string name = "kyungil";

	string result;
	cout << "스트링 클래스를 활용한 출력" << str << endl;
	
	// 문자열의 길이 계산(길이 반환)
	cout << "str의 길이 : " << str.length() << endl;
	cout << "str의 길이 : " << str.size() << endl;		// string.length() == string.size()

	// 문자열 연결
	result = str + ", " + name + "!!";
	cout << "연결결과 : " << result << endl;
	
	// substr : 부분 문자열 추출 : 특정 위치에서 지정된 길이만큼 부분 문자열을 추출
	string sub = result.substr(0, 5);
	cout << sub << endl;

	// 문자열 교체(문자열의 특정 부분을 다른 것으로 교체)
	// 0번째 위치에서 3개의 문자를 Hi로 변경
	result.replace(0, 3, "Hi");
	cout << result << endl;

	// string.empty()의 자료형은 bool
	if (str.empty()) {
		cout << "비어 있음";
	}
	else {
		cout << "비어 있지 않다";
	}

	// 문자열 끝에 다른 문자열 추가
	result.append("game");
	cout << result << endl;

	string test = "Hello World";
	test.insert(5, "-");
	cout << "insert : " << test << endl;
	test.erase(5, 2);
	cout << "erase : " << test << endl;
}