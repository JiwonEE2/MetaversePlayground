/*
반복(Loop)
for, while, do-while

****for****
- 반복작업을 수행할 때 사용되는 반복문 중 하나
- 반복횟수가 명확하거나 정밀한 제어가 필요할 때 유용
- while보다 기본적으로 많은 코드로 이루어져 있지만 임의의 횟수만큼 반복을 수행할땐
for문이 편리함
- for 문은 초기화, 조건, 증감 세 부분으로 구성된다.

for (초기화; 조건(종료); 증감)
{
	// 반복 실행할 코드 작성
}
- 초기화 : 루프가 시작할 때 처음 한 번만 실행되는 부분으로 반복문에 사용될 변수를 초기화
- 조건 : 각 반복이 실행될 때마다 조건이 검사되며 조건 true라면 루프가 계속 실행
	조건이 거짓이면 루프가 종료
- 증감 : 각 반복이 끝난 후에 실행되는 부분으로 변수를 증가/감소 시키면서 반복 횟수를 제어
*/

#include<iostream>

int main() {
	std::cout << 0 << std::endl;
	std::cout << 1 << std::endl;
	std::cout << 2 << std::endl;
	std::cout << 3 << std::endl;
	std::cout << 4 << std::endl;

	std::cout << std::endl;
	// 초기값을 0 // 루프가 종료되는 조건은 i가 5보다 작을 때
	for (int i = 0; i < 5; i++)
	{
		std::cout << i << std::endl;
	}
	std::cout << std::endl;
	for (int i = 10; i <= 1; i--)
	{
		std::cout << i << std::endl;
	}

	std::cout << std::endl;
	// 1~10 홀수만 출력
	for (int i = 1; i <= 10; i++) {
		// 짝수라면 건너뛰어라
		if (i % 2 == 0)continue;

		std::cout << i << std::endl;
	}

	std::cout << std::endl;
	// 1~10 중 5까지만 출력
	for (int i = 1; i <= 10; i++) {
		if (i > 5)break;
		std::cout << i << std::endl;
	}
	// 만약에 1~100의 합을 구하려면?

	int sum = 0; // 값을 누적시킬 변수
	for (int i = 1; i <= 100; i++) {
		sum += i;
	}
	std::cout << sum << std::endl;

	// 만약 1~50까지 반복을 하는 데 i가 3의 배수이거나 5의 배수인지?
	for (int i = 1; i <= 50; i++) {
		// i가 3의 배수거나 5의 배수인지
		if (i % 3 == 0 || i % 5 == 0) {
			std::cout << i << "는 3 or 5의 배수" << std::endl;
		}
	}

	for (int i = 1; i <= 10; i += 2)
	{
		// 홀수만 나온다
	}

	// 다중 for
	for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 3; k++) {
			std::cout << "i의 값 : " << i << "k의 값 : " << k << std::endl;
		}
	}
	/*
	i의 값 : 0k의 값 : 0
	i의 값 : 0k의 값 : 1
	i의 값 : 0k의 값 : 2
	i의 값 : 1k의 값 : 0
	i의 값 : 1k의 값 : 1
	i의 값 : 1k의 값 : 2
	i의 값 : 2k의 값 : 0
	i의 값 : 2k의 값 : 1
	i의 값 : 2k의 값 : 2
	*/
}