// Bollean
// if문

/*
true (1)
false (0)
*/


#include <iostream>


bool isEqual(int a, int b) {
	bool result = (a == b);
	return result;
}


int main() {
	using namespace std;

	bool b1 = true; // copy initialization
	bool b2(false); // direct initialization
	bool b3{ true }; // uniform initialization
	b3 = false;

	//cout << std::noboolalpha; // true, false 대신 0, 1 출력 변경
	//cout << std::boolalpha; // 0, 1 대신 true, false 출력 변경
	//cout << b3 << endl;
	//cout << b1 << endl;


	//// and
	//cout << "true && true : " << (true && true) << endl; // 1
	//cout << "true && false : " << (true && false) << endl; // 0
	//cout << "false && true : " << (false && true) << endl; // 0
	//cout << "false && false : " << (false && false) << endl; // 0

	//// or
	//cout << "true || true : " << (true || true) << endl; // 1
	//cout << "true || false : " << (true || false) << endl; // 1
	//cout << "false || true : " << (false || true) << endl; // 1
	//cout << "false || false : " << (false || false) << endl; // 0
				 
	//if (false) {
	//	cout << " True " << endl;
	//}

	//else
	//	cout << " false " << endl;

	//cout << std::boolalpha;
	//cout << isEqual(1, 1) << endl;
	//cout << isEqual(0, 3) << endl;

	//// 0 이 아니면 모두 True
	//if (5) {
	//	cout << " True" << endl;
	//}
	//else {
	//	cout << " False " << endl;
	//}

	//bool b;

	//cin >> b;
	//cout << std::boolalpha;
	//cout << "your input : " << b << endl;


	// 입력하면 홀수 인지 짝수 인지 출력하는 프로그램
	int b;

	cin >> b;
	if (b % 2 == 0) {
		cout << "even" << endl;
	}
	else {
		cout << "odd" << endl;
	}


	return 0;
}