#include <iostream>

using namespace std;


void breakOrReturn()
{
	while (1)
	{
		char ch;
		cin >> ch;
		if (ch == 'b')
			break;

		if (ch == 'r')
			return;
	}
	cout << "Hello" << endl;
}
void study_0()
{
	int count = 0;
	while (1)
	{
		cout << count << endl;
		if (count == 10) break;
		count++;
	}
}

void study_1()
{
	for (int i = 0; i < 10; ++i)
	{
		cout << i << endl;
		if (i == 5) break;
	}
}

void study_2()
{
	for (int i = 0; i < 10; ++i)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		cout << i << endl;
	}
}

void study_3()
{
	int count(0);

	do
	{
		if (count == 5)
			continue;

		cout << count << endl;
	} while (++count < 10);
}

void study_4()
{
	int count(0);
	//bool escape_flag = false;
	while (1)
	{
		char ch;
		cin >> ch;

		if (ch == 'x')
			//escape_flag = ture;
			break;

		cout << ch << " " << count << endl;

	}
}

int main()
{

	return 0;
}

