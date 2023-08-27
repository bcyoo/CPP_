#include <iostream>
#include <string>

//int main()
//{
//	using namespace std;
//
//	const char my_strs [] = "Hello, World";
//	const string my_hello = "Hello, World";
//	const string my_hello("Hellow, World");
//	const string my_hello{ "Hellow, World" };
//
//	string my_Id = "123";
//
//	cout << my_hello << endl;
//
//	return 0;
//}

using namespace std;

//int main() 
//{
//
//	cout << "Your name ? : ";
//	string name;
//	//cin >> name;
//	getline(cin, name);
//
//	cout << "Your age ? : ";
//	string age;
//	getline(cin, age);
//
//	cout << name << " " << age << endl;
//
//	return 0;
//}

int main()
{

	string a("hello, ");
	string b("World");

	cout << a + b << endl;

	cout << a.length() << endl;

	return 0;
}