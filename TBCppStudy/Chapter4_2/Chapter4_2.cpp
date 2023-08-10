#include<iostream>
#include"MyConstants.h"

using namespace std;

//static int g_a = 1; 
//// static 을 붙이면 다른 cpp파일에서 전역변수를 사용할 수없게 하게됨
//// 이유는 static을 사용했기에 이 cpp 파일 안에서 영역이 제한됨



// forwart declaration 전방선언
// main.cpp 파일을 컴파일 할때
// main.cpp 파일을 컴파일 할때
// 어딘가 cpp파일에 
// extern void doSomething(); 존재하니까 빌드할 때 링킹해줌
//extern void doSomething(); // extern이 생략됨
//extern int a;


/*
	int g_x; // external linkage, 초기화가 안된 전역변수 
	static int g_x // interanl linkage 초기화가 안된 정적변수
	const int g_x // 사용 불가 

	forwart declaration
	extern int g_z;
	extern const int g_z; // 다른곳 한 곳에서 초기화가 되어있으면 const 사용가능

	int g_y(1); external linkage, 초기화가 된 전역변수 
	const int g_y(1); 같은 cpp에서만 접근 가능한 초기화 된 상수
	static int g_y(1); interanl linkage, 다른 cpp에서 사용할 수 없는 초기화가 된 전역변수

	extern int g_w(1); external linkage, 초기화가된 전역변수, 다른 cpp에서 접근화 된 전역변수
	extern const int g_w(1) 초기화가 된 상수, 다른 cpp에서 접근가능 한 상수
*/


void doSomething();

int main() 
{
	cout << "In main.cpp file " << Constants::pi << " " << &Constants::pi << endl;
	doSomething();

	return 0;
}