/* 240910 실습2
1. Box 구조체를 값으로 전달받아 각 멤버의 값을 출력하는 함수를 만들 것
2. Box 구조체를 전달받아 volume 멤버변수를 다른 세 가지 멤버의 곱으로 설정하는 함수를 만들 것.
*/
#include<iostream>
using namespace std;

struct Box
{
	string name;
	float height;
	float width;
	float length;
	float volume;
};

void PrintBox(Box b) {
	cout << b.name << "의 높이 : " << b.height << endl;
	cout << b.name << "의 너이 : " << b.width << endl;
	cout << b.name << "의 길이 : " << b.length << endl;
	cout << b.name << "의 부피 : " << b.volume << endl;
}

 void CalculateVolume(Box b) {
	b.volume = b.height * b.width * b.length;
}

int main() {
	Box b1 = { "큰 상자",2.5,10,15,500 };
	cout << "==== volume 계산 전 ====\n";
	PrintBox(b1);
	Box* bpnt = &b1;
	CalculateVolume(*bpnt);
	cout << "==== volume 계산 후 ====\n";
	PrintBox(*bpnt);
}