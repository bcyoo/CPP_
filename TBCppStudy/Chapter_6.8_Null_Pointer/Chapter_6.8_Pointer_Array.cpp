#include <iostream>

using namespace std;


void study_1() {
	int array[5] = { 9, 7, 5, 3, 1 };
	cout << array[0] << " " << array[1] << endl;
	cout << array << endl; // array 변수는 배열이아니고 포인터임 // array[5]는 5개의 int를담고있는 첫번째의 바이트의 주소를 담음
	cout << &array[0] << endl;
	cout << *array << endl;

	int* ptr = array;
	cout << ptr << endl;
	cout << *ptr << endl;

	//char name[] = "jackjack";
	//cout << *name << endl;
}

void study_2() {

	//void printArray(int array[]) // void printArray(int* array) 밑에와 같은 뜻
	//void printArray(int* array)
	//{
	//	cout << sizeof(array) << endl; // 파라미터가 들어오는 순간 내부적으로 포인터임
	//	cout << *array << endl;

	//	*array = 100;
	//}

	//int array[5] = { 9, 7, 5, 3, 1 };

	//cout << sizeof(array) << endl; // int는 4바이트 x 5 = 20 바이트 출력

	//int* prt = array;

	//cout << sizeof(prt) << endl; // 포인터 변수 자체 사이즈


	//printArray(array);

	//cout << array[0] << " " << *array << endl; // printArray에 *array = 100이라서 함수 밖에서 100 출력

	//cout << *prt << " " << *(prt + 1) << endl; // (prt + 1)을 해줄 경우 다음 array를 가져옴

}


struct MyStruct {
	int array[5] = { 9, 7, 5, 3, 1, };

};


void doSomething(MyStruct *ms) {
	cout << sizeof((*ms).array) << endl;
}

int main() {

	MyStruct ms;

	cout << ms.array[0] << endl;
	cout << sizeof(ms.array) << endl;

	doSomething(&ms);

	// array가 structure나 class 안에 들어있는 경우 포인트로 강제 변환 안됨
	// array자체가 들어감



	return 0;
}