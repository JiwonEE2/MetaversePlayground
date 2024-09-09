/*
struct 실습

// 실습
	// 학생 정보 관리 만드렁보기(구조체)
	// 이름, 나이, 점수(영어, 수학, 과학)
	// 평균을 구하는 함수 만들기
	// ex) 홍길동 20
	// 영어 : 20
	// 수학 : 30
	// 과학 : 50
	// 각 과목 합계와 평균 출력
*/

#include<iostream>
using namespace std;

struct Student {
	string name;
	int english, math, science;
};

float CalculateAverage(Student st) {
	int subjectAverage = (st.english + st.math + st.science) / 3;
	return subjectAverage;
}

int main() {
	Student st[4] = {
		{"이지원",16,28,16},
		{"홍길동",67,75,32},
		{"이지",12,34,62},
		{"이원",98,76,90}
	};

	int studentAverage;
	for (int i = 0; i < 4; i++) {
		studentAverage = CalculateAverage(st[i]);
		cout << st[i].name << "의 평균 점수는 " << studentAverage << "점 입니다.\n";
	}
}

