#include <iostream>
#include "MyConstants.h"

extern int a = 1;

void doSomething()
{
	using namespace std;
	//cout << "Hellow" << endl;

	cout << "In test.cpp file " << Constants::pi << " " << &Constants::pi << endl;

}