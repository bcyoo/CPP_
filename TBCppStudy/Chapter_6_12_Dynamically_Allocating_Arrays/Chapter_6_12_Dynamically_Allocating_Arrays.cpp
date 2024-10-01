#include <iostream>

using namespace std;

void Study_01() {
	// 정적 배열 할당
	const int length = 5; // 상수 선언
	int array[length]; // 정적 할당 배열할 때 const 사용
}

void Study_02() {
	// 동적 배열 할당
	int length;

	cin >> length; // 사용자로부터 배열길이를 입력받음

	int* array = new int[length] {11, 22, 33, 44, 55, 66};

	array[0] = 1;
	array[1] = 2;

	for (int i = 0; i < length; ++i) {
		cout << (uintptr_t) & array[i] << endl; //  uintptr_t 포인터 주소를 정수로 변경, 메모리 주소 출력
		cout << array[i] << endl;
	}

	delete[] array; // [] 배열의 메모리 해제 경우 사용
}

int main() {

	// 컴파일 시간에 크기 결정, 스택 메모리에 할당
	// 이 배열은 함수가 종료될 때 자동으로 메모리가 해제됨
	int fixedArray[] = { 1, 2, 3, 4, 5 }; //정적 배열

	// 동적 메모리할 당 및 초기화
	// array 포인터를 사용, 힙 메모리에 배열을 동적으로 할당
	// 사용자가 직접 메모리관리해야함, 사용 후 delete[]를 사용해서 메모리해제해야함
	int* array = new int[5] {1, 2, 3, 4, 5};

	delete[] array;


	return 0;
}

