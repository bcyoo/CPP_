
#include <iostream> // cout, cin, endl, ...
#include <cstdio> // printf

int main() {

	using namespace std; // std::cout에서 std::생략가능

	//int x = 1024;
	//double pi = 3.141592;
	//// std namespace에 cout, cin, endl에 구현되어있음
	//cout << "This Lecture!" << endl;
	//cout << "x is " << x << " pi is "<< pi << endl;
	//s

	//// \t tab
	//// \n new line, std::endl과 비슷한 기능
	//cout << "abc" << "\t" << "def" << endl;
	//
	//cout << "\a";

	int x = 1;

	cout << "Before yout input, x was " << x << endl;
	// 입력
	cin >> x; // 입력 연산자 

	cout << "Your input is " << x << endl;

	return 0;
}