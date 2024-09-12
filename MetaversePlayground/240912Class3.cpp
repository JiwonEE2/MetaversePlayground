#include<iostream>
// 생성자 멤버 초기화 리스트
// 멤버변수가 생성자 본문 안에서 초기화되기 전에 직접 초기화
// 멤버변수가 먼저 생성되고 나중에 값을 변경하는 것보다 효율적
// 생성자 매개변수 뒤에 삽입. 콜론(:)으로 시작한 다음 초기화할 각 변수들을 쉽표로 구분하여 나열

// 상수, 참조 멤버변수가 있다면
// 반드시 멤버초기화리스트를 활용하여 초기화를 진행해야 한다.
// 생성자 본문에서는 불가

// destructor
// 객체가 소멸될 때 자동으로 호출되는 특별한 멤버함수
// 동적 메모리 할당 해제할 때
// 매개변수를 가질 수 없다. 반환값 x, 오버로딩 불가

using namespace std;

class Exam {

public:
	//const
	const int num;

	// 참조
	int& score;

	// 상수나 참조의 멤버타입은 반드시 멤버초기화리스트를 통해서만 초기화 가능
	/*Exam() {
		num = 1;
		score = 2;
	}*/

	// 상수와 참조멤버들은 반드시 아래와 같이 멤버 초기화리스트를 활용
	Exam(int num, int score) :num(num), score(score) {}
};

class Monster {
	string name;
	int mAtk;
	int mHealth;

public:
	// 생성자 선언 및 멤버 초기화 리스트
	Monster(const string& monsterName, int monsterAtk, int monsterHealth)
		:name(monsterName), mAtk(monsterAtk), mHealth(monsterHealth) {
		// 여기서 할 필요가 없음
	}
};

class MyClass
{
public:
	MyClass(int size);
	~MyClass();

private:
	int* data;
};

// 생성자
MyClass::MyClass(int size)
{
	data = new int[size];
	cout << "여긴 생성자 영역" << endl;
}

// 소멸자
MyClass::~MyClass()
{
	delete[] data;	// 반납. 동적 배열 할당 시 대괄호[] 필요.
	data = nullptr;
	cout << "여긴 소멸자 영역" << endl;
}

int main() {
	MyClass* m = new MyClass(10);

	delete m;

	int MonsterCount;
	cin >> MonsterCount;
	//Monster* mon = new Monster[MonsterCount];
}