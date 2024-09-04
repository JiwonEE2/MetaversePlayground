/*
switch
- 여러 조건을 처리해야 할 때 사용
- 주로 상수 값을 기준으로 분기할 때 사용된다.
- 코드가 깔끔하고 가독성이 올라감.
- 중첩도 가능

switch의 구조
1. 하나의 변수를 검사하고 그 변수의 값에 따라 여러 case 블록 중에 하나를 실행
2. break를 키워드를 통해 각 case의 실행을 종료
3. break가 없으면 다음 case 블록이 연속해서 실행된다.
4. 표현식은 문자, 정수, 열거 타입이 들어올 수 있음

- 상수값을 기준으로 여러 선택지 중 하나를 선택하는 상황에서 사용하기 편리
- 코드의 가독성을 높여 효율성을 개선할 수 있지만 표현식의 제한이 있다.

**
- break?
ㄴ 반복문이나 switch문을 제어할 때 사용
ㄴ break가 실행되면 해당 루프나 switch문을 종료하고 break 다음으로 이동하여 실행된다.
ㄴ 다중 switch나 중첩 반복문에서는 break가 있는 해당 스코프만 빠져나간다! 바로 감싸고 있는!!!

switch (switch_on)
	{
	default:
		break;
	}

switch (표현식)
{
	case 값(상수값):
		// 실행될 내용
		break;
	case 값(상수값):
		// 실행될 내용
		break;
	default: // else
		// 어떤 case에도 해당하지 않을 때 실행된다.(생략가능)
		break;
	}

*/

#include<iostream>

int main() {
	/*std::cout << "게임을 선택하세요!" << std::endl;
	std::cout << "1. 오버워치" << std::endl;
	std::cout << "2. 발로란트" << std::endl;
	std::cout << "3. 디아블로" << std::endl;
	std::cout << "4. 스타" << std::endl;
	std::cout << "5. 롤" << std::endl;

	int Choice;

	std::cin >> Choice;
	switch (Choice)
	{
	case 1:
		std::cout << "오버워치를 선택!" << std::endl;
		break;
	case 2:
		std::cout << "발로란트를 선택!" << std::endl;
		break;
	case 3:
		std::cout << "디아블로를 선택!" << std::endl;
		break;
	case 4:
		std::cout << "스타를 선택!" << std::endl;
		break;
	case 5:
		std::cout << "롤을 선택!" << std::endl;
		break;
	default:
		std::cout << "1~5까지만 선택 가능" << std::endl;
		break;
	}

	int jobSelect, SkillSelect;

	std::cout << "직업을 선택해라 (1:마법사, 2:기사, 3:드워프)";
	std::cin >> jobSelect;

	switch (jobSelect)
	{
	case 1:
		std::cout << "마법사를 선택했다. 어떤 스킬을 사용할까? (1:파이어볼, 2:아이스볼)";
		std::cin >> SkillSelect;
		switch (SkillSelect)
		{
		case 1:
			std::cout << "파이어볼 시전!" << std::endl;
			break;
		case 2:
			std::cout << "아이스볼 시전!" << std::endl;
			break;
		default:
			break;
		}
		break;
	case 2:
		std::cout << "기사를 선택했다. 어떤 스킬을 사용할까? (1:방패공격, 2:기본공격)";
		std::cin >> SkillSelect;
		switch (SkillSelect)
		{
		case 1:
			std::cout << "방패공격 시전!" << std::endl;
			break;
		case 2:
			std::cout << "기본공격 시전!" << std::endl;
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}*/

	std::srand(std::time(NULL)); // 난수!!!
	// 0~RAND_MAX값
	int random = std::rand() % 9; // 0~8
	int random2 = std::rand() % 9 + 1; // 1~9
	std::cout << random << std::endl;
}