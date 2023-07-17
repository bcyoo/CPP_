// 정수형 Integers


/*
Character   char		1byte


integer		Short		2byte
			int			2byte  //대부분 4byte
			long		4byte
			lon long	8byte 
*/


/*
int i = 1;
4byte
32 bits
첫번째 칸은 0 양수 , 1 음수

0000 0000  0000 0000  0000 0000  0000 0001

*/


#include <iostream>
#include <cmath> // pow 제곱
#include <limits> // 컴파일러한테 max mix 물어보는 함수

int main() {
	////short s = 1;    // 2 bytes = 2 * 8 bits = 16 bits, 2^16가지 표현
	////int i = 1;      // 4 bytes = 4 * 8 bits = 32 bits
	////long l = 1;		// 4 bytes = 4 * 8 bits = 32 bits
	////long long ll = 1;	// 8 bytes = 8 * 8bits = 64 bits

	//// 메모리를 차지 하는 양
	//cout << " 메모리 사용량 : " << sizeof(short) << endl;
	//cout << " 메모리 사용량 : " << sizeof(int) << endl;
	//cout << " 메모리 사용량 : " << sizeof(long) << endl;
	//cout << " 메모리 사용량 : " << sizeof(long long) << endl;

	//// singed type 맨앞 부호표현으로 사용
	//// sizeof(short) * 8 - 1에서 - 1은 + -를 표현하는 부호에대한 1bit를 빼줌
	//// sizeof(short) * 8 - 1) - 1에서 맨뒤에 - 1은 0 표현에 대한  1bit를 빼줌
	////cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << endl; // 32767

	////// 컴파일러한테 max mix 물어보는 함수
	////cout << std::numeric_limits<short>::max() << endl; // 32767
	////cout << std::numeric_limits<short>::min() << endl; // -32768
	////cout << std::numeric_limits<short>::lowest() << endl; // -32768

	//// short type 사용할때 overflow
	//
	////s = 32767;
	////s = s + 1;
	////// 32767이 표현할 수 있는 가장 큰수
	////// 1을 더해서 가장 작은 수인 -32768이 나옴 >> overflow
	////cout << "32768? " << s << endl; //overflow 

	////s = -32768;
	////s = s - 1;
	////cout << "32768? " << s << endl; //overflow 

	////// 컴파일러한테 max mix 물어보는 함수
	//cout << "int : " << std::numeric_limits<int>::max() << endl; // 2147483647
	//cout << "int : " <<std::numeric_limits<int>::min() << endl; // -2147483648
	//cout << "int : " << std::numeric_limits<int>::lowest() << endl; // -2147483648

	//int s = 1;
		//// int type 사용할때 overflow
	//s = 2147483647;
	//s = s + 1;
	////// 32767이 표현할 수 있는 가장 큰수
	////// 1을 더해서 가장 작은 수인 -32768이 나옴 >> overflow
	//cout << "2147483647? " << s << endl; //overflow 

	//s = -2147483648;
	//s = s - 1;
	//cout << "-2147483648? " << s << endl; //overflow 
	using namespace std;

	unsigned int i = -1; // overflow 방식때문에 4294967295으로 넘어감
	cout << i << endl;

	int n = 22 / 4; // 정수끼리 연산은 정수로 표현
	cout << n << endl;

	float f = (float)22 / 4;
	cout << f << endl;

	return 0;
}