// binary numbers 이진수

#include <iostream>

int main() {
	using namespace std;

	/*
	10진법 
	0 1 2 3 4 5 6 7 8 9 / 
	10 = 10^1 + 0 
	11 
	12 
	13 = 10^1 + 3
	...
	337 = 300 + 30 + 7 =  10^2 * 3 + 10^1 * 3 + 10^0 + 7
	*/

	/*
	2진법
	0
	1
	10 = 1 + 1 = 2^1*1 + 2^0*0 = 2
	11 = 2^1*1 + 2^0*1 = 3
	100 = 2^2*1 + 2^1*0 + 2^0*0
	
	*/



	/*
	
	int
	4byte 
	32bit

	0101 1110
	128 64 32 16 8 4 2 1
	
	= 2^7*0 + 2^6*1 + 2^5*0 + 2^4*1 + 2^3*1 + 2^2*1 + 2^1*1 + 2^0*0 
	= 128*0 + 64*1 + 32*0 + 16*1 + 8*1 + 4*1 + 2*1 + 1*0
	= 64 + 16 + 8 + 4 + 2
	= 94

	148 > decimal to binary

	148 / 2 = 74 r0(remainder)
	74 / 2 = 37 r0
	37 / 2 = 18 r1
	18 / 2 = 9 r0
	9 / 2 = 4 r1
	4 / 2 = 2 r0
	2 / 2 = 1 r0
	1 / 2 = 0 r1

	1001 0100
	
	
	148 > to binary


	1 2 4 8 16 32 64 128 516 1024

	148 >= 128 -> 1, 2*7
	148 - 128 = 20 >= 64 -> 0
	20 >= 32 -> 0
	20 >= 16 -> 1
	20-16 = 4 >= 8 -> 0
	4 >= 4 -> 1
	0 >= 2 -> 0
	0 >= 1 -> 0

	1001 0100
	*/

	/*
		0110 6
	+
	0111 7
	=
	1101 13
	*/




	/*
	음의 정수
	
	-5

	5만 2진수로 변경
	0000 0101

	보수를 취함
	1111 1010 + 1
	=
	1111 1011 < -5


	
	1001 1110 
	보수
	0110 0001 
	+ 1
	0110 0010 -> -98


	1111 1011
	보수
	0000 0100
	+ 1
	0000 0101 -5


	// singned vs unsigned

	singned
	1001 1110 -> 158
	128  16 8 4 2 0

	unsigned일 경우 맨앞자리는 부호
	1001 1110 
	보수
	0110 0001
	+ 1
	0110 0010 -> -98



	*/


	return 0;
}