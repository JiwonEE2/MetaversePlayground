/*	240913 �ǽ�1
1. �簢�� Ŭ���� �����
2. get, set�� Ȱ���Ͽ� ����, ���θ� ����
3. ������ ����ϴ� get �Լ��� ������
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

	cout << "���� : " << rec1.GetHeight() << ", �ʺ� : " << rec1.GetWidth() << ", ���� : " << rec1.GetArea();
}