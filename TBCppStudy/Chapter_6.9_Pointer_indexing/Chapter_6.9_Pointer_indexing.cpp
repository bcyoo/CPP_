#include <iostream>

using namespace std;


void study_01() {
	int value = 7;
	int* ptr = &value;  // value주소를 포인터 ptr에 넣어줌


	cout << uintptr_t(ptr - 1) << endl;
	cout << uintptr_t(ptr) << endl;
	cout << uintptr_t(ptr + 1) << endl; // int일 경우 4byte 씩 이동
	cout << uintptr_t(ptr + 2) << endl;
}

void studt_02() {
	int array[] = { 9, 7, 5, 3, 1 };

	int* ptr = array;

	cout << array[0] << " " << (uintptr_t) & array[0] << endl;
	cout << array[1] << " " << (uintptr_t) & array[1] << endl;
	cout << array[2] << " " << (uintptr_t) & array[2] << endl;
	cout << array[3] << " " << (uintptr_t) & array[3] << endl;

	for (int i = 0; i < 5; ++i) {
		//cout << array[i] << " " << (uintptr_t) & array[i] << endl;
		cout << *(ptr + i) << " " << (uintptr_t)(ptr + i) << endl;
	}
}

int main() {


	char name[] = "jack jack"; // 맨 뒤에 null char 있음
	const int n_name = sizeof(name) / sizeof(name[0]); // 전체메모리사이즈 / 한 원소

	char* ptr = name;

	for (int i = 0; i < n_name; ++i) {
		cout << *(ptr + i);
	}

	int len = strlen(name);

	for (int i = 0; i < len; ++i) {
		cout << *(ptr + i);
	}


	return 0;

}