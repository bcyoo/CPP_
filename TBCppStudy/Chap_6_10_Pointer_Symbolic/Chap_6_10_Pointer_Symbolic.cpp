#include <iostream>


using namespace std;

const char* getName() {
	return "jack jack";
}

void study_01() {

	//char name[] = "jack jack";

	// char *name "jack jack"; // jack jack은 리터럴, 메모리 담길 곳이 없음 
	// *name는 포인터, 메모리주소를 가리키기만 할수 있음
	const char* name = getName();
	const char* name2 = getName();
	cout << (uintptr_t)name << endl;
	cout << (uintptr_t)name2 << endl;

}

void study_02() {
	int int_arr[5] = { 1, 2, 3, 4, 5 };
	char char_arr[] = "Hello, World!";
	const char* name = "jack jack";

	cout << int_arr << endl; //주소
	cout << char_arr << endl; // 문자열
	cout << name << endl; // 문자열 cout 문자열은 문자의 포인터는 문자열일수도있어서 문자열을 출력
}

int main() {

	char c = 'q';
	cout << &c << endl; // cout 문자열을 출력함

	return 0;
}