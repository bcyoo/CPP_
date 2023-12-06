#include <iostream>
#include <cstddef>
using namespace std;

void doSomething(double* ptr) {
	// ptr 주소의 값을 다시 복사가됨
	cout << "address of pointer varaible in doSomething() " << &ptr << endl; 
	if (ptr != nullptr) {
		// do something useful
		cout << *ptr << endl;
	}
	else {
		// do nothing with ptr
		cout << " Null ptr, do nothing" << endl;
	}
}


int main() {

	double *ptr = nullptr; // c-style

	doSomething(ptr);
	doSomething(nullptr);

	double d = 123.4;
	doSomething(&d);

	ptr = &d;
	doSomething(ptr);


	//std::nullptr_t nptr;

	cout << "address of pointer varaible in main() " << &ptr << endl;


	return 0;
}