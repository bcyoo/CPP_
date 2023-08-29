#include <iostream>

using namespace std;

/*
enum class Colors
{
	BLACK,
	WHITE,
	RED,
	GREEN,
	BLUE,
};

void printColorName(Colors color)
{
	switch (static_cast<int>(color))
	{
		case 0 :
			cout << "black" << endl;
			break;
		case 1:
			cout << "white" << endl;
			break;
		case 2:
			cout << "red" << endl;
			break;
		case 3:
			cout << "green" << endl;
			break;
		case 4:
			cout << "blue" << endl;
			break;
	}
}

int main()
{
	printColorName(Colors::BLACK);
	return 0;
}
*/

int main()
{
	int x;
	cin >> x;
	
	switch (x)
	{
	case 0:
	{
		int y = 5;
		y = y + x;
		cout << y << endl;
		break;
	}
	case 1:
	{
		int y = 5;
		y = y - x;
		cout << y << endl;
		break;
	}
	default:
		cout << "Default" << x << endl;
		break;

	return 0;
}
