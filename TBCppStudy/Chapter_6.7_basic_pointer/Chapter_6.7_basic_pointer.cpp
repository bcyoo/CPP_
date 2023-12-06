#include <iostream>
#include <typeinfo>

using namespace std;

void study_01() {
	int x = 5;
	cout << x << endl;
	cout << &x << endl;
	cout << (int)&x << endl; // & ampersand / address of operator
	// de-reference operator (*)
	cout << *&x << endl; // 메모리 주소에 담겨있는 실제 값
}

void study_02() {
	int x = 5;
	double d = 1.0;
	//typedef int* pint;
	//pint ptr_x = &x, ptr_y = &x;
	int* ptr_x = &x, * ptr_y = &x; // 변수의 주소를 포인터의 변수에 넣어줌
	cout << ptr_x << endl; // 주소 
	cout << *ptr_x << endl; // 주소의 값
	double* ptr_d = &d;
	cout << ptr_d << endl;
	cout << *ptr_d << endl;
}

struct Something {
	int a, b, c, d; // 4 x 4 16byte
};

void study_03() {
	int x = 5;
	double d = 123.0;

	int* ptr_x;
	double* ptr_d;

	cout << sizeof(x) << endl;
	cout << sizeof(d) << endl;

	cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;
	cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;


	Something ss;
	Something* ptr_s;

	cout << sizeof(Something) << endl; // 16byte
	cout << sizeof(ptr_s) << endl; // 4byte
}

int main() {
	int x = 5;
	double d = 123.0;

	int *ptr_x;
	double *ptr_d;

	return 0;
}