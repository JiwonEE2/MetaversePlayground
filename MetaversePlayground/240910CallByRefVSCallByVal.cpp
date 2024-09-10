#include<iostream>
using namespace std;
// 값에 의한 전달 -> callByValue
// 함수에 인수를 전달할 때 인수의 값이 복사되어 함수의 매개변수로 전달된다.
// 함수 내부에서 매개변수를 변경하더라도, 호출한 함수의 실제 인수는 변하지 않는다.

// 참조에 의한 호출
// 함수 호출 시 인수로 변수의 주소를 전달하는 방식
// 함수가 매개변수로 받은 참조를 통해 실제 인수의 값을 직접 수정가능
// 함수 내부에서 매개변수의 값을 변경하면 호출한 함수의 실제 인수도 변경됨
// 값을 복사하는 대신 주소를 전달하므로 메모리와 성능효율이 좋다.

// 변수의 다른 이름(별명)을 만들어 함수가 해당 변수의 원본 데이터에 직접 접근하고 수정


// 값에 의한 전달
void Value(int n) {
	n = 10;
	cout << "n의 값 : " << n << endl;
	cout << "n의 주소값 : " << &n << endl;
}

// 참조에 의한 호출
void Address(int* n) {
	*n = 10;
	cout << "n의 값 : " << n << endl;
	cout << "n의 주소값 : " << &n << endl;
}

// 변수의 다른 이름(별명)을 만들어 함수가 해당 변수의 원본 데이터에 직접 접근하고 수정
void Reference(int& n) {
	n = 10;
	cout << "n의 값 : " << n << endl;
	cout << "n의 주소값 : " << &n << endl;
}

//struct MyStruct {
//
//};
//
//void T(MyStruct& m) {
//
//}

/*
*, & 전달방식의 차이?
* -> 변수의 메모리 주소를 전달하며 함수 내부에서 포인터를 통해 값을 수정
ㄴ 함수 호출 시 변수의 주소를 명시적 전달
ㄴ 포인터는 nullptr 또는 null 설정할 수 있다.

& -> 변수의 별칭을 전달하며 함수 내부에서 참조를 통해 직접 값을 수정
ㄴ 함수 호출 시 변수의 참조를 암시적으로 전달. 더 안전하게 사용 가능
*/

// 아래와 같은 형태는 전달이 아니라 복사가 되기 대문에
// num3, num4에 각각 저장된 10, 20 복사된다.
// Swap 내부에서만 값 변경이 이루어지고 main함수에 있는 num3, num4~~~
void Swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "Swap()함수 내부의 값 : ";
	cout << a << ", " << b << endl;
}

// 주소값을 매개변수로 전달해서 스왑하려는 변수에 직접 접근
void Swap_Address(int* a, int* b) {	// int* a와 int *a는 같다
	int temp = *a;
	*a = *b;
	*b = temp;
}

// 참조방식
// &주소를 반환하는 연산자가 아님
// 참조는 변수의 별명 -> 스왑하려는 메모리를 공유
// 그 말은 : 별명이 바뀌면(참조자) 참조하는 변수의 값이 변경된다.
void Swap_Reference(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int* p = nullptr;	// 초기화
	int num = 30;
	Value(num);			// n=num 형태로 복사
	cout << "num 값 : " << num << endl;
	cout << "num의 주소값 : " << &num << endl;

	cout << "=============================\n";

	int num1 = 30;
	Address(&num1);
	cout << "num1의 값 : " << num1 << endl;
	cout << "num1의 주소값 : " << &num1 << endl;

	cout << "=============================\n";

	int num2 = 30;
	Address(&num2);
	cout << "num2의 값 : " << num2 << endl;
	cout << "num2의 주소값 : " << &num2 << endl;

	cout << "=============================\n";

	int num3 = 10;
	int num4 = 20;
	cout << "스왑 전 데이터 : " << num3 << ", " << num4 << endl;
	Swap(num3, num4);
	cout << "스왑 후 데이터 : " << num3 << ", " << num4 << endl;

	cout << "=============================\n";

	int swapAddressNum1 = 10;
	int swapAddressNum2 = 20;
	cout << "스왑 전 데이터 : " << swapAddressNum1 << ", " << swapAddressNum2 << endl;
	Swap_Address(&swapAddressNum1, &swapAddressNum2);
	cout << "스왑 후 데이터 : " << swapAddressNum1 << ", " << swapAddressNum2 << endl;

	cout << "=============================\n";

	int swapRefNum1 = 10;
	int swapRefNum2 = 20;
	cout << "스왑 전 데이터 : " << swapRefNum1 << ", " << swapRefNum2 << endl;
	Swap_Reference(swapRefNum1, swapRefNum2);
	cout << "스왑 후 데이터 : " << swapRefNum1 << ", " << swapRefNum2 << endl;
}