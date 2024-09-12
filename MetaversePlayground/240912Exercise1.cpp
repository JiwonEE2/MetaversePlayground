/*	240912 실습1
1. 사각형 클래스 만들고
2. 가로, 세로
3. 면적을 출력하는 함수를 만들어라
*/

#include<iostream>
using namespace std;
class Rectangle {
	int height;
	int width;
public:
	Rectangle() {
		height = 10;
		width = 30;
	}

	void CalculateArea() {
		int Area = height * width;
		cout << Area;
	}
};

int main() {
	Rectangle rec1;
	rec1.CalculateArea();
}