/*
=======================================================
���� ����
�� ��ü�� ��� ����� ����. �����Ͱ� ����Ű�� �޸� ������ ���ο� �޸� ������ ����
�� ���� ��ü�� ����� ��ü�� ���������� �޸� ���
=======================================================
*/
#include<iostream>
using namespace std;

class MyArray
{
	int size;	// �������
	int* data;	// ������ �������
public:
	MyArray(int size) {
		this->size = size;
		data = new int[size];
	}
	// ���������(���� ����	)
	MyArray(const MyArray& other) {
		cout << "���� ������ ȣ��" << endl;
		this->size = other.size;
		this->data = new int[other.size];

		for (int i = 0; i < size; i++) {
			this->data[i] = other.data[i];
		}
	}
	~MyArray() {
		if (data != nullptr) {
			delete[] this->data;
		}
		data = nullptr;
	}

	void SetValue(int index, int value) {
		data[index] = value;
	}
	int GetValue(int index) {
		return data[index];
	}
	int* GetDataAddr() {
		return data;
	}
};

int main() {
	/*
	���� ���縦 �������� ������ �⺻���� �����ڿ��� �ܼ��� ������� �ٸ� ��ü�� ~~~
	
	*/
	MyArray arr(10);

	arr.GetDataAddr()[0] = 1;
	cout << arr.GetDataAddr()[0] << endl;

	MyArray clone = arr;

	clone.GetDataAddr()[0] = 2;
	cout << clone.GetDataAddr()[0] << endl;

	cout << arr.GetDataAddr() << endl;
	cout << clone.GetDataAddr() << endl;

	arr.GetDataAddr()[0] = 10;
	cout << "arr �� ������(������ü) : " << endl;
	cout << arr.GetDataAddr()[0] << endl;
	cout << clone.GetDataAddr()[0] << endl;
}