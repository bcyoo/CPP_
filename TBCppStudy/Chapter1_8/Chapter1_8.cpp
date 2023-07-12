// Literal
// Operand
// unary -x
// binary 1 + 2
// terary 

#include <iostream>

using namespace std;

int main() {

	int x = -2; // x variable, 메모리 주소를 갖고있음, 2 literal

	cout << x + 2 << endl;

	cout << "Hello, World!" << endl;

	// terary
	int y = (x > 0) ? 1 : 2; // x가 0보다 크냐, True 1, False 2를 출력

	cout << y << endl;
	return 0;
}