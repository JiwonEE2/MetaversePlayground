/*
=======================================================
깊은 복사
ㄴ 객체의 모든 멤버를 복사. 포인터가 가리키는 메모리 공간도 새로운 메모리 공간에 복사
ㄴ 원본 객체와 복사된 객체가 독립적으로 메모리 사용
=======================================================
*/
#include<iostream>
using namespace std;

class MyArray
{
	int size;	// 멤버변수
	int* data;	// 포인터 멤버변수
public:
	MyArray(int size) {
		this->size = size;
		data = new int[size];
	}
	// 복사생성자(깊은 복사	)
	MyArray(const MyArray& other) {
		cout << "복사 생성자 호출" << endl;
		this->size = other.size;
		this->data = new int[other.size];

		for (int i = 0; i < size; i++) {
			this->data[i] = other.data[i];
		}
	}
	~MyArray() {
		if (data != nullptr) {
			delete[] this->data;
		}
		data = nullptr;
	}

	void SetValue(int index, int value) {
		data[index] = value;
	}
	int GetValue(int index) {
		return data[index];
	}
	int* GetDataAddr() {
		return data;
	}
};

int main() {
	/*
	깊은 복사를 정의하지 않으면 기본복사 생성자에서 단순히 멤버값을 다른 객체로 ~~~
	
	*/
	MyArray arr(10);

	arr.GetDataAddr()[0] = 1;
	cout << arr.GetDataAddr()[0] << endl;

	MyArray clone = arr;

	clone.GetDataAddr()[0] = 2;
	cout << clone.GetDataAddr()[0] << endl;

	cout << arr.GetDataAddr() << endl;
	cout << clone.GetDataAddr() << endl;

	arr.GetDataAddr()[0] = 10;
	cout << "arr 값 변경후(원본객체) : " << endl;
	cout << arr.GetDataAddr()[0] << endl;
	cout << clone.GetDataAddr()[0] << endl;
}