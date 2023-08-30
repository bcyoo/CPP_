#include <iostream>

using namespace std;

int pow(int base, int exponent)
{
	int result = 1;

	for (int count = 0; count < exponent; ++count)
	{
		result *= base;
		cout << result << endl;
	}

	return result;
}

int main()
{
	/*
	int count = 0;
	//for (; ; ++count) // 무한 루프
	//for (; count < 10; ++count) // iteration
	{
		cout << count << endl;
	}
	cout << count << endl;
	*/

	//pow(2, 10);

	//for (int count = 9; count >= 0; count -= 2)
	//{
	//	cout << count << endl;
	//}

	//for (int i = 0, j = 0; i < 10; ++i, --j)
	//{ 
	//	cout << i << " " << j << endl;
	//}

	//for (int j = 0; j < 9; ++j)
	//{
	//	for (int i = 0; i < 9; ++i)
	//	{
	//		cout << i << " " << j << endl;
	//	}
	//}

		// 구구단
	//for (int i = 2; i < 10; ++i)
	//{
	//	for (int j = 1; j < 10; ++j)
	//	{
	//		cout << i << " " << i * j << endl;
	//	}
	//}


	for (unsigned int i = 9; i >= 0; --i)
	{
		cout << i << endl;
		if (i == 0)
		{
			return 0;
		}
	}

	return 0;
}

