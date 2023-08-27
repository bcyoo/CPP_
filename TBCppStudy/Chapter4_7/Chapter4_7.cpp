#include <iostream>
#include <typeinfo>
#include <string>


//int computeDamange(int weapon_id)
//{
//	if (weapon_id == 0) // sword
//	{
//		return 1;
//	}
//
//	if (weapon_id == 1) // hammer
//	{
//		return 2;
//	}
//}


//enum Color //user-defined data types
//{
//	COLOR_BLACK,
//	COLOR_RED = -3,
//	COLOR_BLUE,
//	COLOR_GREEN,
//	COLOR_SKYBLUE,
//};
//
//enum Feeling
//{
//	HAPPY,
//	JOY,
//	TIRED,
//	BLUE
//};
//
//using namespace std;
//
//int main()
//{
//
//	Color paint = COLOR_BLACK;
//	Color house(COLOR_BLUE);
//	Color appe{ COLOR_RED };
//
//
//	Color my_color = COLOR_RED;
//	Color my_color = static_cast<Color>(3);
//
//
//	cout << my_color << " " << COLOR_RED << endl;
//
//	//cin >> my_color;
//	int in_number;
//	cin >> in_number;
//
//	if (in_number == COLOR_BLACK) my_color = COLOR_BLACK;
//
//	string str_input;
//	getline(cin, str_input);
//
//	return 0;
//}


int main()
{
	using namespace std;

	enum class Color
	{
		RED,
		BLUE
	};

	enum class Fruit
	{
		BANANA,
		APPLE
	};

	Color color1 = Color::RED;
	Color color2 = Color::BLUE;
	Fruit fruit = Fruit::BANANA;

	if (color1 == color1)
	{
		cout << " True " << endl;
	}

	return 0;
}

