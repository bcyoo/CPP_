#include <iostream>

using namespace std;


void study_()
{
	int value = 5;

	int* ptr = nullptr;

	ptr = &value;
	int& ref = value;

	//cout << ref << endl;

	//ref = 10; // *ptr = 10;

	//cout << value << " " << ref << endl;

	cout << &value << endl;
	cout << &ref << endl;
	cout << ptr << endl;
	cout << &ptr << endl; // 포인터 자체 변수의 주소가 출력됨
}

struct Something
{
		int v1;
		float v2;
};

struct Other
{
	Something st;
};
int main()
{
	//Other ot;
	//int &v1 = ot.st.v1;
	//v1 = 1;

	int value = 5;

	// 두개 기능이 동일함
	int *const ptr = &value;
	int &ref = value;

	*ptr = 10;
	ref = 10;

	return 0;
}


