#include<iostream>
using namespace std;

/*
=============================================================================
- namespace
�� �̸�����. �̸� �浹�� �����ϱ� ����
=============================================================================
*/
namespace A {
	void Print() {
		cout << "���� A������ ����ִ� ��ö��";
	}
}

namespace B {
	void Print() {
		cout << "���� B������ ����ִ� ��ö��";
	}
}

namespace out {
	namespace in {
		void Show() {
			cout << "dd" << endl;
		}
	}
}

namespace math {
	int sum(int a, int b) {
		return a + b;
	}
}

int main() {
	A::Print();
	B::Print();
	out::in::Show();
	//math::sum
}