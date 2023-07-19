// relational Operation
#include <iostream>
#include <iomanip>
int main() {
	using namespace std;

	// > < ==

	//while (true)
	//{
	//	int x, y;
	//	cin >> x >> y;
	//	cout << "inpur values are : " << x << " " << y << endl;
	//
	//	if (x == y)
	//		cout << "equal" << endl;
	//	if (x != y)
	//		cout << "Not equal" << endl;
	//	if (x > y)
	//		cout << "x is greater than y" << endl;
	//	if (x < y)
	//		cout << "x is less than y" << endl;
	//	if (x >= y)
	//		cout << "x is greater than y or equal to y" << endl;
	//	if (x <= y)
	//		cout << "x is less than or equal to y" << endl;
	//}


	double d1(100 - 99.99);  // 0.001
	double d2(10 - 9.99);	 // 0.001
	cout << std::setprecision(17) << endl;
	cout << d1 << endl;
	cout << d2 << endl;

	// 오차 한계 정하기
	const double epsilon = 1e-16;
	if (std::abs(d1 - d2) < epsilon)
		cout << "Approximately equal" << endl;
	else
		cout << "Not equal" << endl;


	if (d1 == d2)
		cout << "equal" << endl;
	else
	{
		cout << "not equal" << endl;
		if (d1 > d2) 
			cout << "d1 > d2" << endl;
		else // if (d1 < d2)
			cout << "d1 < d2" << endl;
	}	

	return 0;
}