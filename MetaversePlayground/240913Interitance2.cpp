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
		cout << "부모클래스 privateValue : " << privateValue << endl;
		cout << "부모클래스 protectedValue : " << protectedValue << endl;
		cout << "부모클래스 publicValue : " << publicValue << endl;
	}
};

class ChildPublic :public Parent {
public:
	void ShowValue() {
		cout << "자식 클래스에서의 publicValue : " << publicValue << endl;
		cout << "자식 클래스에서의 protectedValue : " << protectedValue << endl;
		// 액세스 불가
		// cout << "자식 클래스에서의 privateValue : " << privateValue << endl;
	}
};

int main() {

}