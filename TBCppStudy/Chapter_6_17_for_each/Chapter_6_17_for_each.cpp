#include <iostream>
#include <limits>
#include <algorithm>
#include <vector>

using namespace std;



void study()
{
	// change array values;
	for (auto& number : fibonacii)
		number *= 10;


	// output
	for (const auto& number : fibonacii)
		cout << number << " ";
	cout << endl;
}

int main()
{

	std::vector<int> fibonacii = { 0, 1, 1, 2, 300, 5, 7, 13,
							23, 34, 55, 89 };

	int max_num = std::numeric_limits<int>::lowest();
	for (const auto& n : fibonacii)
		max_num = std::max(max_num, n);

	cout << max_num << endl;

	return 0;
}
