// Chapter1_14.cpp : Defines the entry point for the console application.

#include <iostream>
#include <algorithm>
using namespace std;

//#define MAX(a, b) ((a > b) ? a : b)

#define LIKE_APPLE //정의가 되어있는 cpp파일 안에서만 영향

void doSomething();

int main() {
	//cout << std::max(1 + 3, 2) << endl;
	//cout << MAX(1 + 3, 2) << endl;
	doSomething();

	return 0;
}