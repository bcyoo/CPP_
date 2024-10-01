#include <iostream>

using namespace std;

void study_1()
{
	//int x = 5;
	//int &ref_x = x; // const를 붙일 경우 ref_x의 값을 변경하지 못함, 메모리 주소가 있어야지 reference를 사용할수 있음
	//const int& ref_2 = ref_x;
}

void doSomething(const int &x) // 포인터로 넣게되면 변수 복사가 일어나는데 이건 안일어남
{
	cout << x << endl;
}

int main()
{
	//const int ref_x = 3 + 4;
	//const int &ref_x = 3 + 4;
	int a = 1;

	doSomething(a);
	doSomething(1); // 함수 파라미터에 const가 있는 경우 바로 숫자를 넣을 수 있음 
	doSomething(a + 3); // const가 있는 경우 가능


	return 0;
}