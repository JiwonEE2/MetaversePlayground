/*	240912 �ǽ�1
1. �簢�� Ŭ���� �����
2. ����, ����
3. ������ ����ϴ� �Լ��� ������
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