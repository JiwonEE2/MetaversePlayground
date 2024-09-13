/*




*/

#include<iostream>
using namespace std;

class Person {
	string name;
	int age;
public:
	// get
	string GetName()const {
		return name;
	}
	
	// set
	void SetName(const string& s) {
		name = s;
	}

	int GetAge()const {
		return age;
	}

	void SetAge(int a) {
		age = a;
	}
};

int main() {
	Person p;
	p.SetName("홍길동");
	p.SetAge(10);

	cout << "이름 : " << p.GetName() << endl;
	cout << "나이 : " << p.GetAge() << endl;
}