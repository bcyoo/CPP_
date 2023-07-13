#include <iostream>

void doSomething() {
	using namespace std;
	
//1. 전처리기, 빌드 전에 결정됨
#ifdef LIKE_APPLE //if define
	cout << "Apple" << endl;
#endif

#ifndef LIKE_APPLE  // if not define
	cout << "Orange" << endl;
#endif

	//2. 전처리기, 빌드 전에 결정됨
	//#ifdef LIKE_APPLE //if define
	//	cout << "Apple" << endl;
	//#else
	//	cout << "Orange" << endl;
	//#endif 
}