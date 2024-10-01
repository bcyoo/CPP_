#include <iostream>

using namespace std;

int main()
{
	int value = 5;

	int* ptr = nullptr;
	
	ptr = &value;
	int &ref = value;

	//cout << ref << endl;

	//ref = 10; // *ptr = 10;

	//cout << value << " " << ref << endl;

	cout << &value << endl;
	cout << &ref << endl;
	cout << ptr << endl;
	cout << &ptr << endl;// 포인터 자체 변수의 주소가 출력됨
	return 0;
}


