#include <iostream>

int getPrice(bool onSale) {
	if (onSale)
		return 10;
	else
		return 100;
}

int main() {
	using namespace std;

	// sizeof : 데이터 type 알고 싶을때
	//float a; //4 bytes, 32bits
	//sizeof(float);
	//sizeof(a);

	// comma operator
	//int x = 3;
	//int y = 10;
	////int z = (++x, ++y);// ++x 계산, ++y를 계산하고 ++y값을 z에 할당
	//++x;
	//++y;
	//int z = y;
	//cout << x << " " << y <<" " << z << endl; // 4 11 11
	// 
	//int a = 1, b = 10;
	//int z;
	//z = a, b; // 연산자 우선 순위가 z = a를 번저 대입하고, b와 출력
	//cout << a << " " << b << " " << z <<endl; // 1 10 1
	// 
	//int a1 = 1, b1 = 10;
	//int z1;
	//z1 = (++a1, a1 + b1);
	//cout << z1 << endl; // 12 > ++a1 2 > a2(2) +b1(10) = 12 > z1 = 12

	//// conditional operator (arithmetric if)
	//bool onSale = true;
	//const int price = (onSale == true)? 10 : 100; // 참이면 10 거짓이면 100
	//
	////const int price = getPrice(onSale);
	////if (onSale)
	////	price = 10;
	////else
	////	price = 100;
	//
	//cout << price << endl;

	int x = 5;
	cout << ((x % 2 == 0) ? "even" : "odd") << endl;

	return 0;
}