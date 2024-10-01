#include <iostream>

using namespace std;

int main()
{

	// 1
	//const int value = 5;

	//// vlaue의 주소를 ptr에 넣어줌
	//const int *ptr = &value;

	//// const를 붙이면
	//// // value = 6이 안됨
	////*ptr = 6; 

	//cout << *ptr << endl;


	// 2
	//int value1 = 5;
	//const int *ptr = &value1;

	//int value2 = 6;
	//ptr = &value2; // *ptr 자체의 value 변환은 됨 -> 포인터에 다른변수를 넣는것은 가능함


	// 3. 포인터 자체가 상수

	int value = 5;
	//int* const ptr = &value; // 포인터 자체를 상수로만듬
	const int const* ptr = &value;
	//*ptr = 10; // const 때문에 불가
	cout << *ptr << endl;

	int value2 = 8;
	//ptr = &value2; // 포인터 자체가 상수이기에 다른 주소를 넣을 수 없음.



	return 0;
}