// 지역 변수의 범위(scope)와 지속(duration)기간

#include <iostream>

namespace work1
{
	int a = 1;
	void doSomething() {

		a += 3;
	}
}

namespace work2
{
	int a = 1;
	void doSomething() {
		a += 5;
	}
}

int main() {
	
	using namespace std;;

	//:: 영역, 범위 설정 연산자
	work1::a;
	work1::doSomething();

	work2::a;
	work2::doSomething();


	int apple = 5;
	cout << apple << endl;

	{
		int apple = 1;
		cout << apple << endl;
	}

	cout << apple << endl;

	return 0;
}