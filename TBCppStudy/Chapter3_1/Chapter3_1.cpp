// Operator Precedence and Associativity
// 연산자 우선순위, 결합 법칙 

// https://ko.wikipedia.org/wiki/C%EC%99%80_C%2B%2B%EC%9D%98_%EC%97%B0%EC%82%B0%EC%9E%90
#include <iostream>
#include <cmath> // 제곱 pow

using namespace std;



// XOR		^
// or	    |
// AND		&&
// OR		||



/*
r = 1 + 2+ 3 * 4

a = b = c

t /= --w+5

a||b && c||d
*/


int main() {

	int x = 4 + 2 * 3; // add(4, mult(3, 2))
	int x1 = 3 * 4 / 2;  // left to right 순으로 계산
	int x2 = std::pow(2, 3); // 2e3

	cout << x2 << endl;

	return 0;
}