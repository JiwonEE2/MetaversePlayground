#include<iostream>
using namespace std;

/*
=============================================================================
- namespace
ㄴ 이름공간. 이름 충돌을 방지하기 위함
=============================================================================
*/
namespace A {
	void Print() {
		cout << "나는 A공간에 살고있는 김철수";
	}
}

namespace B {
	void Print() {
		cout << "나는 B공간에 살고있는 김철수";
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