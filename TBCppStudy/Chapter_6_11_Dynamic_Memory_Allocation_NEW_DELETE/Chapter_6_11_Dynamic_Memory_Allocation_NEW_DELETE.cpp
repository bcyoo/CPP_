#include <iostream>

using namespace std;


void study_01() {
	//int array[100000]; // stack memory, 메모리는 스택에 할당, 스택은 용량이 작음, // 동적은 힙 메모리에 할당

// int var;
// var = 7;

	int* ptr = new (std::nothrow)int{ 7 }; // 4byte에 사이즈가 맞게 os에게 메모리를 받아옴, 그 메모리 주소를 알려줌, 포인터에 주소를 저장함
	//*ptr = 7; // 역참조

	if (ptr) {
		cout << ptr << endl; // 주소 
		cout << *ptr << endl; // 실제 값
	}

	delete ptr;
	ptr = nullptr;

	if (ptr != nullptr) {
		cout << "After" << endl; // 주소 
		cout << ptr << endl; // 주소 
		cout << *ptr << endl; // 실제 값
	}
	else {
		cout << "err" << endl;
	}
}

int main() {

	// memory leak

	while (true) {
		int* ptr = new int;
		cout << ptr << endl;
		delete ptr;
	}



	return 0;
}