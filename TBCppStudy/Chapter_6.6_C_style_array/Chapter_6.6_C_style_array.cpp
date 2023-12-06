#include <iostream>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;


void study_01() {
	char myString[] = "string"; // 문자 7개 마지막을 표시하는 null 0 들어가있음

	for (int i = 0; i < 7; ++i) {
		cout << (int)myString[i] << endl;
	}

	cout << sizeof(myString) / sizeof(myString[0]) << endl;
}

void study_02() {
	char myString[255];

	//cin >> myString;

	//myString[4] = '\0'; // null char까지만 출력함

	cin.getline(myString, 255); // 빈칸까지 출력
	//cout << myString;

	int ix = 0;

	while (true) {
		if (myString[ix] == '\0') break;;
		cout << myString[ix] << " " << (int)myString[ix] << endl;
		++ix;
	}
}

int main() {

	char source[] = "Copy this!";

	char dest[50];
	//strcpy_s(dest, 50, source); // source에 있는것을 dest로 복사하는것
	//cout << source << endl;
	//cout << dest << endl;


	//strcat() 뒤에 문자 추가
	//strcmp() 두 문자 비교

	//strcat_s(dest, source);
	//cout << source << endl;
	//cout << dest << endl;

	cout << strcmp(dest, source) << endl;

	return 0;
}