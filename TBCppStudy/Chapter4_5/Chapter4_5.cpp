#include <iostream>
#include <typeinfo>
#include <iomanip>


int main()
{
    using namespace std;

    //int a = 123.0;
    //cout << typeid(a).name() << endl;
    //cout << a << endl;

    //float f = 1.0f;
    //double d = f; // numeric promotion


    //// numeric conversion
    //double b = 3;
    //short s = 2;

    //int i = 2;
    //char c = i;

    //cout << i << endl;
    //cout << static_cast<int>(c) << endl;

    //double d = 0.123456789;
    //float f = d;

    //cout << std::setprecision(12) << d << endl;


    cout << 5u - 10;

    // unsigned가 우선순위가 더 높음
    // int, unsigned int, long unsigned long
    // long long, unsigned long long, float, double
    // long double >이 우선순위 제일 높음


    // casting

    int i1 = int(4.0);
    int i2 = (int)4.0;
    int i3 = static_cast<int>(4.0);

    return 0;
}

