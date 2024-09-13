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

class ChildProtected :protected Parent {
public:
	void ShowValue() {
		cout << "�ڽ� Ŭ���������� publicValue : " << publicValue << endl;
		cout << "�ڽ� Ŭ���������� protectedValue : " << protectedValue << endl;
		// �׼��� �Ұ�
		// cout << "�ڽ� Ŭ���������� privateValue : " << privateValue << endl;
	}
};

class ChildPrivate :private Parent {
public:
	void ShowValue() {
		cout << "�ڽ� Ŭ���������� publicValue : " << publicValue << endl;
		cout << "�ڽ� Ŭ���������� protectedValue : " << protectedValue << endl;
		// �׼��� �Ұ�
		// cout << "�ڽ� Ŭ���������� privateValue : " << privateValue << endl;
	}
};

int main() {
	ChildPublic c1;
	c1.ShowValue();

	cout << "c1.publicValue" << c1.publicValue << endl;
	// ���� �Ұ�
	// cout << "c1.privateValue" << c1.privateValue << endl;
	// cout << "c1.protectedValue" << c1.protectedValue << endl;

	ChildProtected c2;
	c2.ShowValue();

	// ���� �Ұ�
	/*cout << "c2.publicValue" << c2.publicValue << endl;
	cout << "c2.privateValue" << c2.privateValue << endl;
	cout << "c2.protectedValue" << c2.protectedValue << endl;*/

	ChildPrivate c3;
	c3.ShowValue();

	// ���� �Ұ�
	/*cout << "c3.publicValue" << c3.publicValue << endl;
	cout << "c3.privateValue" << c3.privateValue << endl;
	cout << "c3.protectedValue" << c3.protectedValue << endl;*/
}