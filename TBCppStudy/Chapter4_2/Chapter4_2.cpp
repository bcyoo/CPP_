// 전역 변수 Global Variable
// 정적 변수 Static Variable
// 내부 연결 Internal Linkage 
// 외부 연결 External Linkage

#include <iostream>
#include "MyConstants.h"

using namespace std;
void doSomething();

/*
	int g_x; // external linkage // 초기화가 안된 전역 변수 선언
	static int g_x; // internal linkage // 다른 cpp파일로 부터 접근할 수 없음, 초기화가 되지 않는 정적 변수
	const int g_xl // X 불가능 // const는 값을 안바꾸게 다는 조건이라 선언 불가능 > = 0 초기화를 해줘야함


	forward declaration일 경우
	extern을 붙여줌
	extern int g_z;
	extern const int g_z; const를 붙일 수 있음, 다른 곳 어디선가에서만 값을 초기화 해줘야함

	int g_y(1); extern 생략한 것임, 초기화가 된 전역변수를 뜻함
	static int g_y(1); 외부에서 쓸 수 없는, 다른 cpp에서 접근이 불가능한 Internal Linkage인 전역변수
	const int g_y(1); 일반적인 상수 선언, 같은 파일 안에서만 접근하는 상수

	extern int g_w(1); 초기화도하고, 전역변수이기도하고, 다른 cpp파일에서 접근가능, 다른곳에서 초기화를 하면 안됨
	extern const in g_w(1);  상수고, 초기화됐고, 외부에서도 접근할 수 있음, 즉 다른 cpp에서 접근 가능
*/




#pragma region global variable
//int g_a = 1;
#pragma endregion

#pragma region static variable
//static int s_a = 1; // 메모리가 정적임]
//void doSomething(int a) {
//	/*
//	static int a = 1; 
//	이 {} 영역안에 변수를 선언될 때 같은 메모리를 사용, 초기화를 한번 밖에 안함
//	2~3번 실행될 때 값이 증가된 경우
//	변수 a가 os로 부터 받은 메모리가 static이라는 뜻
//	*/
//	//static int a = 1; // 1로 초기화가 반드시 되어있어야함, 디버깅 시 좋음
//	++g_a;
//	cout << g_a << endl;
//}
#pragma endregion

#pragma region External linkage
// forward delaration
//extern void doSomething(); // test.cpp에 있는 dosomething 함수가 존재하니까 초기화해줌, extern 키워드가 생략가능
//extern int a;
#pragma endregion

int main() {

#pragma region gloval variable
	//cout << "global variable  " << value << endl;
	
	//// 지역 변수
	//// {} 벗어나는 순간 메모리가 os로 반납
	//// scope, duration 제한됨
	//int value = 1;
	//cout << "local variable  " << value << endl;
	
	//// global scope operatior
	//cout << "global variable, :: " << ::value << endl;
#pragma endregion

#pragma region static variable
	//int a = 10;
	//doSomething(a); //2
	//doSomething(a); //3
	//doSomething(a); //4
	//doSomething(a); //5
#pragma endregion

#pragma region external linkage
	//doSomething();
	//cout << a << endl;
#pragma endregion


	cout << "In main.cpp file " << Constants::pi << " " << &Constants::pi << endl;
	doSomething();

	return 0;
}