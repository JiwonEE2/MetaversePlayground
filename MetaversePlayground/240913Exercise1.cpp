/*	240913 실습1
1. 사각형 클래스 만들고
2. get, set을 활용하여 가로, 세로를 세팅
3. 면적을 계산하는 get 함수를 만들어라
*/
#include<iostream>
using namespace std;

class Rectangle {
	int width, height;

public:
	Rectangle() {
		width = 0;
		height = 0;
	}
	int GetWidth() {
		return width;
	}
	int GetHeight() {
		return height;
	}
	void SetWidth(int w) {
		width = w;
	}
	void SetHeight(int h) {
		height = h;
	}
	int GetArea() {
		return width * height;
	}
};

int main() {
	Rectangle rec1;
	rec1.SetHeight(10);
	rec1.SetWidth(20);

	cout << "높이 : " << rec1.GetHeight() << ", 너비 : " << rec1.GetWidth() << ", 넓이 : " << rec1.GetArea();
}