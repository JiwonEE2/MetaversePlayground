/*
함수(Function)
<함수구성>
// 반환형 함수이름(매개변수){함수내용}

<반환형(Return Type)>
// 함수의 결과(출력)
// 함수의 결과 데이터가 없는 반환형 void
<return>
// 함수가 끝나기 전까지 반드시 return으로 반환형에 맞는 데이터를 return해
// 함수 진행 중 return을 만났을 경우 그 결과 데이터를 반환하고 함수를 탈출
// void 반환형 함수의 return은 생략가능
*/
#include<iostream>
int IntReturn() {
	std::cout << "return 전" << std::endl;
	return 10;
	std::cout << "return 후" << std::endl;
}

void Func4_2() {
	std::cout << "끝" << std::endl;
}

void Func4_1() {
	Func4_2();
}

void Main() {
	Func4_1();
}

int main() {
	Main();
}