#include<iostream>
using namespace std;
// ���� ���� ���� -> callByValue
// �Լ��� �μ��� ������ �� �μ��� ���� ����Ǿ� �Լ��� �Ű������� ���޵ȴ�.
// �Լ� ���ο��� �Ű������� �����ϴ���, ȣ���� �Լ��� ���� �μ��� ������ �ʴ´�.

// ������ ���� ȣ��
// �Լ� ȣ�� �� �μ��� ������ �ּҸ� �����ϴ� ���
// �Լ��� �Ű������� ���� ������ ���� ���� �μ��� ���� ���� ��������
// �Լ� ���ο��� �Ű������� ���� �����ϸ� ȣ���� �Լ��� ���� �μ��� �����
// ���� �����ϴ� ��� �ּҸ� �����ϹǷ� �޸𸮿� ����ȿ���� ����.

// ������ �ٸ� �̸�(����)�� ����� �Լ��� �ش� ������ ���� �����Ϳ� ���� �����ϰ� ����


// ���� ���� ����
void Value(int n) {
	n = 10;
	cout << "n�� �� : " << n << endl;
	cout << "n�� �ּҰ� : " << &n << endl;
}

// ������ ���� ȣ��
void Address(int* n) {
	*n = 10;
	cout << "n�� �� : " << n << endl;
	cout << "n�� �ּҰ� : " << &n << endl;
}

// ������ �ٸ� �̸�(����)�� ����� �Լ��� �ش� ������ ���� �����Ϳ� ���� �����ϰ� ����
void Reference(int& n) {
	n = 10;
	cout << "n�� �� : " << n << endl;
	cout << "n�� �ּҰ� : " << &n << endl;
}

//struct MyStruct {
//
//};
//
//void T(MyStruct& m) {
//
//}

/*
*, & ���޹���� ����?
* -> ������ �޸� �ּҸ� �����ϸ� �Լ� ���ο��� �����͸� ���� ���� ����
�� �Լ� ȣ�� �� ������ �ּҸ� ����� ����
�� �����ʹ� nullptr �Ǵ� null ������ �� �ִ�.

& -> ������ ��Ī�� �����ϸ� �Լ� ���ο��� ������ ���� ���� ���� ����
�� �Լ� ȣ�� �� ������ ������ �Ͻ������� ����. �� �����ϰ� ��� ����
*/

// �Ʒ��� ���� ���´� ������ �ƴ϶� ���簡 �Ǳ� �빮��
// num3, num4�� ���� ����� 10, 20 ����ȴ�.
// Swap ���ο����� �� ������ �̷������ main�Լ��� �ִ� num3, num4~~~
void Swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "Swap()�Լ� ������ �� : ";
	cout << a << ", " << b << endl;
}

// �ּҰ��� �Ű������� �����ؼ� �����Ϸ��� ������ ���� ����
void Swap_Address(int* a, int* b) {	// int* a�� int *a�� ����
	int temp = *a;
	*a = *b;
	*b = temp;
}

// �������
// &�ּҸ� ��ȯ�ϴ� �����ڰ� �ƴ�
// ������ ������ ���� -> �����Ϸ��� �޸𸮸� ����
// �� ���� : ������ �ٲ��(������) �����ϴ� ������ ���� ����ȴ�.
void Swap_Reference(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int* p = nullptr;	// �ʱ�ȭ
	int num = 30;
	Value(num);			// n=num ���·� ����
	cout << "num �� : " << num << endl;
	cout << "num�� �ּҰ� : " << &num << endl;

	cout << "=============================\n";

	int num1 = 30;
	Address(&num1);
	cout << "num1�� �� : " << num1 << endl;
	cout << "num1�� �ּҰ� : " << &num1 << endl;

	cout << "=============================\n";

	int num2 = 30;
	Address(&num2);
	cout << "num2�� �� : " << num2 << endl;
	cout << "num2�� �ּҰ� : " << &num2 << endl;

	cout << "=============================\n";

	int num3 = 10;
	int num4 = 20;
	cout << "���� �� ������ : " << num3 << ", " << num4 << endl;
	Swap(num3, num4);
	cout << "���� �� ������ : " << num3 << ", " << num4 << endl;

	cout << "=============================\n";

	int swapAddressNum1 = 10;
	int swapAddressNum2 = 20;
	cout << "���� �� ������ : " << swapAddressNum1 << ", " << swapAddressNum2 << endl;
	Swap_Address(&swapAddressNum1, &swapAddressNum2);
	cout << "���� �� ������ : " << swapAddressNum1 << ", " << swapAddressNum2 << endl;

	cout << "=============================\n";

	int swapRefNum1 = 10;
	int swapRefNum2 = 20;
	cout << "���� �� ������ : " << swapRefNum1 << ", " << swapRefNum2 << endl;
	Swap_Reference(swapRefNum1, swapRefNum2);
	cout << "���� �� ������ : " << swapRefNum1 << ", " << swapRefNum2 << endl;
}