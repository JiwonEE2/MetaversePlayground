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

void Func4_2() {						// 1
	std::cout << "끝" << std::endl;		// 2
}										// 3
										
void Func4_1() {						// 4
	Func4_2();							// 5
}										// 6
										
void Main() {							// 7
	Func4_1();							// 8
}										// 9
// 함수 호출 순서 : 7 8 4 5 1 2 3 6 9

// <함수 전방 선언>
// 함수를 구현하기 전에 함수의 선언만 우선 진행
// 컴파일 시 함수의 호출은 함수의 구현을 필요로 하며 구현이 없는 경우 사용 불가
// 전방 선언을 진행하는 경우 함수의 구현을 호출 이후에 진행하도록 구현 가능

void Func6_1(); // 선언은 있지만 구현이 없기에 오류 발생
void Func6_3();

// <기본 매개변수>
// 매개변수에 기본값을 지정하여 함수 호출 시 매개변수 전달하지 '않으면' 기본값으로 처리
// 기본 매개변수는 뒤에서부터 지정을 해야함
void Func7(int param, int param1=2/*기본 매개변수*/, int param2 = 3) {

}

void Main6() {
	Func6_1();
	Func6_3();
	// Func6_2(); // 함수의 호출이 함수의 구현보다 먼저 진행되었기에 오류 발생
}

void Func6_2() {

}

int main() {
	// Main();
	Main6();
}