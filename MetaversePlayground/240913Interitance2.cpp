#include<iostream>
using namespace std;

class Parent {
	int privateValue;
protected:
	int protectedValue;
public:
	int publicValue;
	Parent() :privateValue(1), publicValue(2), protectedValue(3) {}
	void ShowValue() {
		cout << "�θ�Ŭ���� privateValue : " << privateValue << endl;
		cout << "�θ�Ŭ���� protectedValue : " << protectedValue << endl;
		cout << "�θ�Ŭ���� publicValue : " << publicValue << endl;
	}
};

class ChildPublic :public Parent {
public:
	void ShowValue() {
		cout << "�ڽ� Ŭ���������� publicValue : " << publicValue << endl;
		cout << "�ڽ� Ŭ���������� protectedValue : " << protectedValue << endl;
		// �׼��� �Ұ�
		// cout << "�ڽ� Ŭ���������� privateValue : " << privateValue << endl;
	}
};

int main() {

}