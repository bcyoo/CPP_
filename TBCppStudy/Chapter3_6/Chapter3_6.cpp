//논리 연산자
//Logical Operator

#include <iostream>

int main() {
	using namespace std;

	// logical Not !x
	bool x = true;
	cout << !x << endl;

	// logical AND &&
	bool x1 = true;
	bool y1 = false;
	cout << (x1 && y1) << endl;
	bool hit = true;
	int health = 10;
	if (hit == true && health < 20)
	{
		cout << "die" << endl;
	}
	else
	{
		health -= 20;
	}


	// logical OR ||
	bool x2 = false;
	bool y2 = true;
	cout << (x2 || y2) << endl;

	int x3 = 5;
	int y3 = 7;

	if (x3 != y3) {
		cout << "x does not equal to y" << endl;
	}
	else {
		cout << "x equals y" << endl;
	}

	int v = 1;
	if (v == 0 || v == 1) {
		cout << "v is 0 or 1" << endl;
	}


	// short circuit evaluation
	int x4 = 2;
	int y4 = 2;

	if (x4 == 1 && y4++ == 2) // x4==1 를 먼저 계산하고 false일 경우에 && 연산식일 경우 y4++ = 2를 계산을 안하고 false 출력 
	{
		// do something
	}
	cout << y4 << endl;

	bool x5 = true;
	bool y5 = false;

	// De Morgan's Law
	!(x5 && y5); // ()풀면  !x || !y

	
	// XOR
	// false false > false
	// false true > true
	// true false > true
	// true true > false

	cout << (x5 != y5) << endl;
	if (x5 != y5) {
	}

	// 숙제
	/*

	(true && true) || false >>> true

	(false && true) || true >>> true

	(false && true) || false || true >>> true

	(14 > 13 || 2 > 1) && (9 > 1) false

	!(2314123 > 2 || 123123 > 2387) false
	2314123 < 2 && 123123 < 2387 false

	*/
	cout << "정답은 : " << (2314123 < 2 && 123123 < 2387) << endl;

	bool v1 = true;	
	bool v2 = false;	
	bool v3 = false;

	bool r1 = v1 || v2 && v3; // v1 || (v2 && v3) 순으로 계산됨 >> or보다 and가 우선순위
	bool r2 = (v1 || v2) && v3;

	cout << r1 << " " << r2 << endl;
	return 0;
}