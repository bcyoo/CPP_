/*
Declaration 선언
Definition 정의
*/
#include <iostream>

using namespace std;

int add(int a, int b); // forward Declaration
int multiply(int a, int b); // forward declaration
int subtract(int a, int b); // forward declaration

int main() {

	cout << add(1, 2) << endl;

	return 0;
}

// definition
int add(int a, int b) {
	return a + b;
}

// definition
int multiply(int a, int b) {
	return a * b;
}

// definition
int subtract(int a, int b) {
	return a - b;
}


