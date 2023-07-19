// bitwise Operators
// 비트 단위 연산자


#include <iostream>
#include <bitset> // 2진수표현

int main() {
	using namespace std;

	// << left shift 기본형
	// >> right shift
	// not ~, and &, or |, xor ^ 


	// 2진수로 표현해줌
	//unsigned int a = 1024;
	//cout << std::bitset<16>(a) << endl;
	////unsigned int b = a << 3; // left shift는 2^N을 나타잼 2진수 자리수 왼쪽 이동
	////unsigned int b = a >> 3; // right shift는 2^N을 나타잼 2진수 자리수 오른쪽 이동
	////cout << std::bitset<16>(a >> 1) << " " << (a >> 1) << endl;
	////cout << std::bitset<16>(a >> 2) << " " << (a >> 2) << endl;
	////cout << std::bitset<16>(a >> 3) << " " << (a >> 3) << endl;
	////cout << std::bitset<16>(a >> 4) << " " << (a >> 4) << endl;

	// 0000 ~ > 1111 // 반전 보수처리
	//unsigned int a = 1024;
	//cout << std::bitset<16>(~a) << " " << (~a) << endl; // ~ 보수처리

	// 2진수 표현
	//unsigned int a = 0b1100; // 0b 0 0 0  2진수 표현
	//unsigned int b = 0b0110;

	//cout << a << " " << b << endl;

	//cout << std::bitset<4>(a & b) << endl; // bitwise and
	//cout << std::bitset<4>(a | b) << endl; // bitwise or
	//cout << std::bitset<4>(a ^ b) << endl; // bitwise xor

	/*
	quiz
	0110 >> 2 -> decimal
	5 | 12
	5 & 12
	5 ^ 12
	*/

	unsigned int a = 0b0110;

	cout << std::bitset<4>(5 ^ 12) << endl;


	return 0;
}


