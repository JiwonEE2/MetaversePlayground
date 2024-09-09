#include<iostream>

using namespace std;
int main() {
	srand(time(NULL));

	int number[10];

	int dest, sour, temp;

	// ¹è¿­ ÃÊ±âÈ­
	for (int i = 0; i < 10; i++) {
		number[i] = i + 1;	// number[10] = { 1,2,3,4,5,6,7,8,9,10 };
	}
	cout << "¼ÅÇÃ Àü : \n";
	for (int i = 0; i < 10; i++) {
		cout << "number[" << i << "]ÀÎµ¦½º : " << number[i] << "\n";
	}

	// ¼ÅÇÃ
	for (int i = 0; i < 1000; i++) {
		dest = rand() % 10;
		sour = rand() % 10;

		// µÎ ÀÎµ¦½º ±³È¯
	}
}