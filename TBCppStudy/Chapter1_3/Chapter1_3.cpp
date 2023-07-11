
/*
객체 objects
변수 variables // 메모리 주소의 다른 이름
Left-values, Right-values // 메모리 주소를 직접 접근 가능 여부 기준
초기화 initialization
대입 assignment
*/

#include <iostream>

//int main() {
//	
//	// x라는 정수형 (integer type) 변수를 선언
//	// x라는 이름의 메모리 공간
//	
//	int x = 123; // initialization
//	//int x(123);
//
//	// x는 Left-values, 메
//	// x + 2 Right-values
//	x = x + 2; // assingnment(할당)
//
//	std::cout << x << std::endl;
//	std::cout << &x << std::endl; //& ampersand
//
//	return 0;
//}


int main() {
	int x = 1;
	x = x + 2;
	std::cout << x << std::endl; // 3

	int y = x;
	std::cout << y << std::endl; // 3

	std::cout << x + y << std::endl; // 6

	std::cout << x << std::endl; // 3

	int z = 4;
	std::cout << z << std::endl; // 4

	return 0;
}
