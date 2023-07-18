// 리터럴 상수
// literal constants


#include <iostream>

int main() {

	using namespace std;

	// 변수 pi, 메모리에 공간을 차지하고 있고, 값을 변경할 수 있고,
	// 상수 3.14, 
	float pi = 3.14f; //뒤에 f가없으면 double, l이면 long double

	int i = 12345u; // unsigned, U, L, uL, LU, LL

	int ii = (unsigned)-1234; // 앞에 unsigned를 붙이면 casting

	unsigned int n = 5u;
	long n2 = 5L;
	double d = 6.0e100; // e-10

	// Decimal 10진수 :  0 1 2 3 4 5 6 7 8 9 10  
	// Octal 8진수 : 0 1 2 3 4 5 6 7 10 11 12 13 
	// Hexa 16진수  : 0 1 2 3 4 5 6 7 8 9 A B C D E F 10

	// 8진수
	int x8 = 012; // 0을 붙이면 8진수
	cout << x8 << endl;

	// 16진수
	int x16 = 0xF; // 0x를 붙이면 16 진수
	cout << x16 << endl;

	// 바이너리 리터널
	int xb = 0b1011'1111'0011; // 0b ' 표시로 사림이 보기 좋게 표현 가능
	cout << xb << endl;
	
	int num_items = 123;
	int price = num_items * 10;


	return 0;
}