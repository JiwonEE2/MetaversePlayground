#include<iostream>
using namespace std;
/*	240911 실습1
1. 연산자 오버로딩을 이용하여 *
*/

struct Point {
	float x, y;

	Point(float x, float y) {
		this->x = x;
		this->y = y;
	}
	// operator 하려면 생성자 필요
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