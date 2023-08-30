#include <iostream>

using namespace std;


int getInt()
{
	while (1)
	{
		cout << "Enter a interger number : ";
		int x;
		cin >> x;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n'); // 여러개 입력시 첫번째 입력만 남김
			cout << "Invalid number, please try again" << endl;
		}
		else
		{
			cin.ignore(32767, '\n');
			return x;
		}
	}
}

char getOperator()
{
	while (1)
	{
		cout << "Enter an operator (+, -, *, /) : "; 
		char op;
		cin >> op;
		cin.ignore(32767, '\n'); // 여러개 입력시 첫번째 입력만 남김
		
		if (op == '+' || op == '-' || op == '*' || op == '/')
			return op;
		else
			cout << "Invalid operator" << endl;
	}

}

void printResult_if(int x, char op, int y)
{
	if (op == '+') cout << x + y << endl;
	else if (op == '-') cout << x - y << endl;
	else if (op == '*') cout << x * y << endl;
	else if (op == '/') cout << x / y << endl;
	else
	{
		cout << "Invalid operator" << endl;
	}
}

void printResult_switch(int x, char op, int y)
{
	switch (op)
	{
	case ('+'):
		cout << x + y << endl;
		break;
	case ('-'):
		cout << x - y << endl;
		break;
	case ('*'):
		cout << x * y << endl;
		break;
	case ('/'):
		cout << x / y << endl;
		break;
	}
}

int main()
{

	int x = getInt();
	char op = getOperator();
	int y = getInt();

	printResult_switch(x, op, y);

	return 0;
}
