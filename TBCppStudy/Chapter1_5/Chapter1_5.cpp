/*
function
return values
parameters
arguments
*/
#include <iostream>

using namespace std;

int multiplyTwoNumbers(int num_a, int num_b) {

	int sum = num_a * num_b;

	return sum;
}

void printHelloWorld() {
	cout << "Hello World " << endl;
	return;
}

void print() {
	cout << "Hello" << endl;
}

int addTwoNumber(int a, int b) {
	print();
	return a + b;
}

int main() {

	printHelloWorld();

	int sum = addTwoNumber(1, 3);
	cout << sum << endl;

	return 0;
}