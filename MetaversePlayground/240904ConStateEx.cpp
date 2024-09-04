#include<iostream>

int main() {
	// ½Ç½À
	// 1. ÀÔ·ÂÀ» µÎ °³ ¹Ş´Â´Ù
	// 2. ´õÇÏ±â »©±â °ö¼À ³ª´°¼ÀÀ» ¼±ÅÃÇÑ´Ù.
	// 3. ¸¸¾à 1¹øÀ» ´©¸£¸é ´õÇÏ±â¿¡ ´ëÇÑ ¿¬»ê °á°ú°¡ ³ª¿È
	//		2¹øÀº »©±â, °ö¼À, ³ª´°¼À..

	int num1, num2, input, result;
	std::cin >> num1 >> num2 >> input;

	if (input == 1) {
		result = num1 + num2;
	}
	else if (input == 2) {
		result = num1 - num2;
	}
	else if (input == 3) {
		result = num1 * num2;
	}
	else if (input == 4) {
		result = num1 / num2;
	}
	else {
		std::cout << "Àß¸øµÈ ÀÔ·Â" << std::endl;
	}
	std::cout << result;
}