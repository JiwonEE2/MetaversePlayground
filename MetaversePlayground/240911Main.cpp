/*
문자배열
- 말 그대로 문자를 저장하는 배열. 문자열 저장할 때 배열의 마지막에 null문자를 추가하여 문자열의 끝을 표시해야함

**c 스타일의 문자열 함수 종류
- strlen(const char* str) : 문자열의 길이를 반환
- strcpy(char* dest, char* src) : 문자열을 복사
- strcat : 문자열 연결
- strcmp : 문자열 비교
*/

#include<iostream>
using namespace std;

int main() {
	//char str[6];
	//char str1[6] = { 'H', 'e','l','l','o','\0' };	// '\0' : null 문자

	//for (int i = 0; i < 6; i++) {
	//	cout << str1[i];
	//}
	//char str2[] = "Hello";		// char 형 배열로 문자열을 선언하면 문자로 나뉘고, 자동으로 null문자가 추가된다.
	//for (size_t i = 0; i < str2[i] != '\0'; i++)	// 끝에 null 이 아닐 때까지 돌림
	//{

	//}
	//char str3[] = "한글";

	char str1[50] = "Hello";
	char str2[10] = "kyungil";
	char str3[10];

	cout << "str1의 길이 : " << strlen(str1) << endl;
	cout << "str2의 길이 : " << strlen(str2) << endl;

	strcpy_s(str3, str1);		// str1을 str3에 복사
	cout << "strcpy : " << str3 << endl;
	strcat_s(str1, str2);		// str1에 str2를 연결
	cout << "strcat : " << str1 << endl;
}