// 부동소수점 수
// Floating Point Numbers

/*
부동소수점
Floating Point		float	4byte	4byte

					double	8byte	8byte

					Long
					double	8byte	8,12 or 16byte
*/

#include <iostream>
#include <iomanip> // 입출력 몇자리 수까지 표현 조절가능
#include <limits>
#include <cmath>


int main() {

	//float f;
	//double d;
	//long double ld;

	//cout << sizeof(f) << endl; // 4byte
	//cout << sizeof(d) << endl; // 8byte
	//cout << sizeof(ld) << endl; // 8byte

	//cout << numeric_limits<float>::max() << endl;
	//cout << numeric_limits<double>::max() << endl;
	//cout << numeric_limits<long double>::max() << endl;

	//cout << numeric_limits<float>::min() << endl;
	//cout << numeric_limits<double>::min() << endl;
	//cout << numeric_limits<long double>::min() << endl;

	//cout << numeric_limits<float>::lowest() << endl;
	//cout << numeric_limits<double>::lowest() << endl;
	//cout << numeric_limits<long double>::lowest() << endl;

	//float f(3.141592f); //3.14 = 31.4  0.1
	//cout << "3.14 : " << 3.14 << endl;
	//cout << "31.4e-1 : " << 31.4e-1 << endl; // ^-1 = e-1
	//cout << "31.4e-2 : " << 31.4e-2 << endl;
	//cout << "31.4e1 : " << 31.4e1 << endl;
	//cout << "31.4e2 : " << 31.4e2 << endl;

	//double d(3.141592);
	//long double ld(3.141592);

	using namespace std;
	cout << "1.0 / 3.0 : " << 1.0 / 3.0 << endl;
	cout << std::setprecision(16) << endl; //16자리까지 표현
	cout << "setprecision 1.0 / 3.0 : " << 1.0 / 3.0 << endl;


	float f(123456789.0f); // 10 significant digits 유효 숫자
	cout << std::setprecision(9); // 16자리까지 표현
	cout << "setprecision float : " << f << endl;

	double d(0.1); // 10 significant digits 유효 숫자
	cout << "double : " << d << endl;
	cout << std::setprecision(17); // 16자리까지 표현
	cout << "setprecision double : " << d << endl;

	double d1(1.0);
	double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
	cout << std::setprecision(17);
	cout << d1 << endl; // 0.1
	cout << d2 << endl; // 0.99999999999999989

	double zero = 0.0;
	double posinf = 5.0 / zero;
	double neginf = -5.0 / zero;
	double nan = zero / zero;

	cout << posinf << " " << std::isinf(posinf) << endl;
	cout << neginf << " " << std::isinf(neginf) << endl;
	cout << nan << " " << std::isnan(nan) << endl;

	cout << 1.0 << " " << std::isnan(1.0) << endl;

	return 0;
}