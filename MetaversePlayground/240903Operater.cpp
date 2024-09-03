/*
연산자(operater)
======================================================================

- 산술연산자( + - * / % )
ㄴ + : 두 값을 더한다. ex) a + b
ㄴ - : 두 값에서 하나의 값을 뺀다. ex) a - b
ㄴ * : 두 값을 곱한다. ex) a * b
ㄴ / : 첫번째 값을 두번째 값으로 나눈다. ex) a / b
ㄴ % : 첫번째 값을 두번째 값으로 나눈 나머지. ex) a % b

======================================================================

- 증감 연산자( ++ -- )
ㄴ 증감 연산자는 ++, -- 기호를 이용하는 연산자. 피연산자의 값을 1증가 또는 감소시킨다.
ㄴ ++a : 선 증가 후 연산 (먼저 증가 후 그 다음 연산)
ㄴ a++ : 선 연산 후 증가
ㄴ --a : 선 감소 후 연산
ㄴ a-- : 선 연산 후 감소

** 전위연산(앞에 연산자)과 후위연산(뒤에 연산자)**
- 증감 연산자의 위치가 변수의 앞에 위치하는 표현을 전위, 뒤에 위치하는 표현을 후위

======================================================================

- 관계 연산자 ( > < >= <= == != )
a > b  --> 피연산자 a가 피연산자 b보다 크다.
a < b  --> 피연산자 a가 피연산자 b보다 작다.
a >= b --> 피연산자 a가 피연산자 b보다 크거나 같다.
a <= b --> 피연산자 a가 피연산자 b보다 작거나 같다.

a == b --> 피연산자 a가 피연산자 b와 같다.
a != b --> 피연산자 a가 피연산자 b와 같지 않다.

======================================================================

- 논리 연산자 ( && || ! )
ㄴ && (AND) : 피연산자가 모두 참일 때만 true
	ex) 피연산자		연산자		피연산자		결과
		0			&&			0			0
		0			&&			1			0
		1			&&			0			0
		1			&&			1			1

ㄴ || (OR) : 피연산자가 하나라도 참이면 true
	ex) 피연산자		연산자		피연산자		결과
		0			||			0			0
		0			||			1			1
		1			||			0			1
		1			||			1			1

ㄴ ! (NOT) : 피연산자의 반대

======================================================================

- 비트 연산자 (연산자 중 가장 속도가 빠르다)
ㄴ 데이터를 비트 단위로 처리하는 연산자
ㄴ 하드웨어와 밀접하게 관련되 각종 처리를 쉽게 해주고 메모리 공간을 줄여서 성능을 높여준다.
ㄴ 컴퓨터는 모든 정보를 1과 0, 2진수로 저장하고 처리.

* 비트?
ㄴ 2진수 값 하나(0, 1)를 저장할 수 있는 최소 메모리 공간
- 1bit로 표현할 수 있는 것은 1과 0
- 2bit는 00, 01, 10, 11 4개
- 3bit는 2^3 = 8개
- 1byte는 8bit 이고, 256개의 경우를 표현할 수 있는 저장용량을 가진다.

- 2진수 : 0, 1 숫자 사용
- 10진수 : 0~9 숫자 사용
- 16진수 : 0~9 숫자와 a~f 문자 사용
ㄴ a는 정수 10, b는 11, ..., f는 15를 의미.
ㄴ 최대값은 f이므로 자릿수는 f 다음에 증가한다.
- 8진수 : 0~7 숫자 사용

** 비트 연산자 종류 **
종류			연산식			설명
&			a&b				비트단위 AND연산			// 두 개의 비트가 모두 1일 때 1을 반환
|			a|b				비트단위 OR연산			// 두 개의 비트 중 하나가 1일 때 1을 반환
^			a^b				비트단위 XOR연산			// 두 개의 비트가 서로 같지 않을 경우 1을 반환
~			~a				비트단위 NOT연산			// 보수연산. 비트를 반전
<<			a<<3			왼쪽으로 3칸 이동			// 비트를 이동
>>			a>>1			오른쪽으로 1칸 이동		// 비트를 이동

- 복합 대입 연산자
+=		a += b		// a = a + b
-=		a -= b		// a = a - b
*=		a *= b		// a = a * b
/=		a /= b		// a = a / b
&=		a &= b		// a = a & b
%=		a %= b		// a = a % b
|=		a |= b		// a = a | b
^=		a ^= b		// a = a ^ b
<<=		a <<= b		// a = a << b
>>=		a >>= b		// a = a >> b

======================================================================
*/

#include<iostream>
int main() {
	int a = 10;
	int b = 3;
	std::cout << "====산술 연산자====" << std::endl;
	std::cout << "a + b = " << a + b << std::endl; // 13
	std::cout << "a - b = " << a - b << std::endl; // 7
	std::cout << "a * b = " << a * b << std::endl; // 30
	std::cout << "a / b = " << a / b << std::endl; // 3
	std::cout << "a % b = " << a % b << std::endl; // 1

	std::cout << std::endl;
	std::cout << "====증감 연산자====" << std::endl;
	int num = 10;
	std::cout << "num의 값 : " << num << std::endl; // 10
	num++; // num = num + 1 과 같다 (= : 대입 연산자)
	std::cout << "num++ 후 num의 값 : " << num << std::endl; // 11
	++num;
	std::cout << "++num 후 num의 값 : " << num << std::endl; // 12
	num--;
	std::cout << "num-- 후 num의 값 : " << num << std::endl; // 11
	--num;
	std::cout << "--num 후 num의 값 : " << num << std::endl; // 10

	int num1 = 10;
	int num2 = 20;
	int c;
	int d;

	c = ++num1; // 전위 방식, 선 증가 후 연산
	std::cout << "변수 c의 값 : " << c << ", 변수 num1의 값 : " << num1 << std::endl; // 11, 11
	d = num2++; // 후위 방식, 선 연산 후 증가(num2에 저장되어 있는 20을 먼저 대입하고 증가)
	std::cout << "변수 d의 값 : " << d << ", 변수 num2의 값 : " << num2 << std::endl; // 20, 21

	std::cout << "====관계 연산자====" << std::endl;
	int num3 = 1;
	int num4 = 2;

	int result;
	int result1;
	int result2;
	int result3;

	result = (num3 > num4); // num3이 num4보다 큰가?
	result1 = (num3 <= num4);
	result2 = (num3 == num4);
	result3 = (num3 != num4);

	std::cout << "result  결과 : " << result << std::endl; // 0 --> false
	std::cout << "result1 결과 : " << result1 << std::endl; // 1 --> true
	std::cout << "result2 결과 : " << result2 << std::endl; // 0
	std::cout << "result3 결과 : " << result3 << std::endl; // 1

	bool bClick = 1;
	std::cout << bClick << std::endl;

	std::cout << "====논리 연산자====" << std::endl;
	int num5 = 3;
	int num6 = 5;

	int result4, result5, result6;
	// 1. (num5 > 0) 참, (num6 < 10) 참
	result4 = (num5 > 0) && (num6 < 10);
	// 2. (num5 <= 2) 거짓, (num6 > 5) 거짓
	result5 = (num5 <= 2) || (num6 > 5);
	result6 = !num6;

	std::cout << "result4 결과 : " << result4 << std::endl; // 1
	std::cout << "result5 결과 : " << result5 << std::endl; // 0
	std::cout << "result6 결과 : " << result6 << std::endl; // 0

	std::cout << "====비트 연산자(&)====" << std::endl;

	int bitNum1 = 20;
	int bitNum2 = 16;
	int bitRes;
	bitRes = bitNum1 & bitNum2;
	/*
		20	0001 0100
	&	16	0001 0000
	------------------
			0001 0000	16
	*/
	std::cout << "& 결과 : " << bitRes << std::endl;
	
	std::cout << "====비트 연산자(|)====" << std::endl;

	int bitNum3 = 20;
	int bitNum4 = 16;
	int bitRes1;
	bitRes1 = bitNum3 | bitNum4;
	/*
		20	0001 0100
	&	16	0001 0000
	------------------
			0001 0100	20
	*/

	/*
		10	0000 1010 << 1
			0001 0100	20
			0010 1000	40
			// 두 배씩 늘어난다
	*/
	std::cout << "| 결과 : " << bitRes1 << std::endl;

	int shiftNum = 10;
	int shiftRes = shiftNum << 2;

	std::cout << shiftRes << std::endl;

	int x = 5;
	int y = 3;

	x += y; // x = x + y;

	// 출력
	// std::cout;
	// 입력
	// std::cin;

	int input;
	std::cin >> input;

	std::cout << "입력된 숫자는 : " << input << std::endl;
}