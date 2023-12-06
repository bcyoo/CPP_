#include <iostream>

using namespace std;

int main() {
	const int num_row = 3;
	const int num_col = 5;

	for (int row = 0; row < num_row; ++row) {
		for (int col = 0; col < num_col; ++col) {
			cout << '[' << row << ']' << '[' << col << ']' << '\t';
		}
		cout << endl;
	}


	//int array[num_row][num_col] =
	//{
	//	{1, 2, 3, 4, 5},	 // row 0
	//	{6, 7, 8, 9, 10},	 // row 1
	//	{11, 12, 13, 14, 15} // row 2
	//};


	//int array[][num_col] =
	//{
	//	{1, 2, 3,},	 // row 0
	//	{6, 7, 8, 9, 10},	 // row 1
	//	{11, 12, 13, 14, 15} // row 2
	//};

	int array[num_row][num_col] = { 0 };

	for (int row = 0; row < num_row; ++row) {
		for (int col = 0; col < num_col; ++col) {
			//cout << '[' << row << ']' << '[' << col << ']' << '\t';
			cout << array[row][col] << '\t';
			//cout << (int)&array[row][col] << '\t';
		}
		cout << endl;
	}


	return 0;
}