#include <iostream>

int main() {

	using namespace std;

	//int x = 7;
	//int y = 4; // - x일 경우 컴파일 문제 일어나지 않음
	//int y1 = 1 - -x; // = 1 + x
	//int z = x + y;

	//int z1 = x % y;


	//cout << x / y << " " << z1 << endl;

	int x = 7;
	int y = 4;

	cout << x / y << endl;


	// 둘중에 하나만 실수일 경우 실수를 출력
	cout << float(x) / y << endl;
	cout << x / float(y) << endl;
	cout << float(x) / float(y) << endl;

	// 왼쪽 숫자(-5)가 음수면 결과는 음수로 출력
	// 왼쪽 숫자(5)가 양수면 결과는 양수로 출력
	cout << -5 % 2 << endl;

	int z = x;
	z += y; // z = z + y, *= /= %= += -=

	return 0;
}