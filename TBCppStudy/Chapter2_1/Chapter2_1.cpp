/*
Fundamental Data Type 기본 자료형
*/

/*

Character Types

char		 8bits 1byte
char16_t	 16bits 2byte
char32_t	 32bits 4byte
whar_t 

*/

/*
//음의 정수, 0, 양의 정수 
Integer Types (signed)

signed char				  8bits 1byte
singed short int		 16bits 2byte
signed int				 16bits 2byte
signed long int			 32bits 4byte
signed long long int	 64bits 8byte

*/

/*
0, 양의정수, 특정상황에 속도가 빠른경우가 있음.
Integer Types (unsigned)

unsigned char				  8bits
unsinged short int			 16bits
unsigned int				 16bits
unsigned long int			 32bits
unsigned long long int		 64bits

*/

/*

Floating-point Types (signed)

float
double
long double 

*/

/*
Boolean Type	 bool
Void Type		 void (no Storage), 
Null pointer	 decltype(nullptr)
*/



#include <iostream>
#include <bitset>

int main() {

	using namespace std;

	//int j = 3;
	//int i = -1;
	//int k = 123; //4byte, 32bit
	//char a = 'H'; // 1byte, 8bit
	//cout << (uintptr_t)static_cast<void*>(&a) << endl;
	//cout << (uintptr_t)static_cast<void*>(&i) << endl;
	//

	bool bVlaue = true;
	char chVlaue = 65;
	float fValue = 3.141592f;
	double dValue = 3.141592;
	
	//cout << "bool byte : " << sizeof(fValue) << endl;
	//cout << "char byte : " << sizeof(chVlaue) << endl;
	//cout << "float byte : " << sizeof(fValue) << endl;
	//cout << "double byte : " << sizeof(dValue) << endl;

	//int a = 123; // copy initialization  // ex: int a(3.14) > 3으로 바꿔서 컴파일함
	//int a(123); // direct initialization
	//int b{ 123 }; // uniform initailization 

	//int k = 0, l = 1, m = 2; //같은 data type일 경우
	//int k = 0, l(1), m{ 2 }; //같은 data type일 경우

	return 0;
}