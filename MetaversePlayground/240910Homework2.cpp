/* 240910 �ǽ�2
1. Box ����ü�� ������ ���޹޾� �� ����� ���� ����ϴ� �Լ��� ���� ��
2. Box ����ü�� ���޹޾� volume ��������� �ٸ� �� ���� ����� ������ �����ϴ� �Լ��� ���� ��.
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
	cout << b.name << "�� ���� : " << b.height << endl;
	cout << b.name << "�� ���� : " << b.width << endl;
	cout << b.name << "�� ���� : " << b.length << endl;
	cout << b.name << "�� ���� : " << b.volume << endl;
}

 void CalculateVolume(Box b) {
	b.volume = b.height * b.width * b.length;
}

int main() {
	Box b1 = { "ū ����",2.5,10,15,500 };
	cout << "==== volume ��� �� ====\n";
	PrintBox(b1);
	Box* bpnt = &b1;
	CalculateVolume(*bpnt);
	cout << "==== volume ��� �� ====\n";
	PrintBox(*bpnt);
}