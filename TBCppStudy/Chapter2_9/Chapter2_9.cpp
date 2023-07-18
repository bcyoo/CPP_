// 심볼링 상수
// symbolic constants

#include <iostream>
#include "MY_CONSTANTS.h"  //const header file

//#define PRICE_PER_ITEM 30

using namespace std;

// parameter에 constant const를 붙임
void printNumber(const int& n_number) {
	int n = n_number;
	cout << n << endl;
}

int main() {
	const int price_per_item = 30;
	const double gravity{ 9.8 }; // const constant인 경우 바꿀 수 없음, 반드시 initialization 해줘야함

	printNumber(123);
	int number;
	cin >> number;
	// special_number은 run time에 결정됨
	const int special_number(number); // 실행 시키기 전까지는 special_number는 알 수 없다.
	// 컴파일 타임에 완전히 결정되는 상수
	constexpr int my_const(123); // number을 넣을 수 없음 컴파일타임에 결정되는 상수이기 때문에

	int num_item = 123;
	int price = num_item * price_per_item;


	// const header file
	double radius;
	cin >> radius;
	double circumference = 2.0 * radius * constants::pi;

	return 0;
}