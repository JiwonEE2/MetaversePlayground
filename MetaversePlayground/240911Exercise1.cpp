#include<iostream>
using namespace std;
/*	240911 �ǽ�1
1. ������ �����ε��� �̿��Ͽ� *
*/

struct Point {
	float x, y;

	Point(float x, float y) {
		this->x = x;
		this->y = y;
	}
	// operator �Ϸ��� ������ �ʿ�
	Point operator*(Point& other) {
		return Point(this->x * other.x, this->y * other.y);
	}
};

int main() {
	Point vec1 = Point(1, 2);
	Point vec2 = Point(2, 3);

	Point res = vec1 * vec2;
	cout << res.x << ", " << res.y;
}