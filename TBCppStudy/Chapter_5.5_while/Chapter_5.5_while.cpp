#include <iostream>


using namespace std;


int main()
{
	cout << "while-loop test" << endl;
	
	/*
	1
	12
	123
	1234
	*/
	int outer_count = 1;
	//while (outer_count <= 5)
	//{
	//	int inner_count = 1;
	//	while (inner_count < outer_count)
	//	{
	//		cout << inner_count++ << " ";
	//	}
	//	cout << endl;
	//	++outer_count;
	//}

	/*
	5
	54
	543
	5432
	54321
	*/
	int outer_count = 5;
	while (outer_count <= 5)
	{
		int inner_count = 5;
		while (inner_count > outer_count)
		{
			cout << inner_count--;
		}
		cout << endl;
		outer_count--;
		if (outer_count == -1)
			break;
	}


	return 0;
}


