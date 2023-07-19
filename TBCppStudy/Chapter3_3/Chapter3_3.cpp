// 증감/감소 연산자
// increment / decrement

#include <iostream>


int add(int a, int b) {
	return a + b;
}
int main() {
	using namespace std;


	//int x = 5;
	////int y = ++x; // ++는 x에 1을 더함
	//int y1 = --x;

	//int z = x--;


	//cout << y1 << endl;
	//cout << z << endl;

	/*
	++x : x에 ++을 작동하고 cout에 보내서 작동
	x++ : x를 cout에 보내고 x에 ++가 작동
	*/

	//int x = 6, y = 6;
	//cout << x << " " << y << endl; // 6 6
	//cout << ++x << " " << --y << endl; // 7 5
	//cout << x << " " << y << endl; // 7 5
	//cout << x++ << " " << y-- << endl; // 7 5
	//cout << x << " " << y << endl; // 8 4


	int x = 1, y = 2;
	int v = add(x, ++y); // do not use (x, ++x)

	cout << v << endl;

	return 0;
}