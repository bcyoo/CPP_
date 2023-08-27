#include <iostream>
#include <string>

using namespace std;

void printPerson(double height, float weight, int age)
{
	// 파라미터가 너무 많아서 구조체를 사용해야함
}

struct Person
{
	double height;
	float weight;
	int age;
	string name;

	void print()
	{
		cout << height << " " << weight << " " << age << " " << name << endl;
	}
};

//void printPerson(Person ps)
//{
//	cout << ps.height << " " << ps.weight << " " << ps.age << " " << ps.name;
//}

struct Family
{
	Person me;
	Person mom;
	Person dad;
};


Person getMe()
{
	Person me{ 2.0, 100.0, 20, "bc" };
	return me;
}

struct Employee // 2 + (2) + 4 + 8 = 16 // padding
{
	short id;		    // 2byte
	int age;			// 4byte
	double wage;	    // 8byte
};

int main()
{

	Employee emp1;
	cout << sizeof(Employee) << endl;

	return 0;
}

