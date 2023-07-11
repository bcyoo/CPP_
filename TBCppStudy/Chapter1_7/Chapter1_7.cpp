#include <iostream>

using namespace std;

//int main() {
//
//	int x(0); // x = 0;
//	cout << "" << &x << endl;
//
//	{
//		/*
//		지역 변수는 영역을 벗어나면 사용 X
//		지역 변수가 차지하고 있던 메모리는 그 지역 변수가 영역을 벗어날 때 stack 메모리로 반납,
//		반납된 메모리는 다음 지역 변수가 사용할 수 있도록 대기.
//		*/
//		//int x = 1; // x는 다른 메모리의 식별자
//		x = 1; // int x(0) 초기화 한 x에 1을 할당
//
//		cout << "" << &x << endl;
//	}
//
//	{
//		int x = 2;
//		cout << "" << &x << endl;
//	}
//
//	cout << "" << &x << endl;
//	return 0;
//}

// 숙제

void doSomething(int x) {
	x = 123;
	cout << x << endl; // #2 123
}

int main() {

	int x = 0;

	cout << x << endl; // #1 0
	doSomething(x);
	cout << x << endl; // #3 0

	return 0;
}