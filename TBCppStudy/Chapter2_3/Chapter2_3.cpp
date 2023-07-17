// Fixed-width Integers
// 고정 너비 정수
// C++ 11 부터는 똑같은 데이터 사이즈를 사용하는 고정 너비 정수 채택

#include <iostream>
#//include <cstdint> // 고정 너비 정수

int main() {
	using namespace std;

	std::int16_t i(5);  // 2byte to short type
	std::int8_t myint = 65; // 1byte to char type

	cout << myint << endl;

	std::int_fast8_t fi(5); // 8bits 중에 가장 빠른 type
	std::int_least64_t fl(5); // 적어도 64bits인 type

	return 0;
}