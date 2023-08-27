#include <iostream>


auto Add_int(int x, int y) -> int
{
    return x + y;
}

auto Add_double(double x, double y)
{
    return x + y;
}




int main()
{
    using namespace std;

    auto a = 123;
    auto d = 123.0;
    auto c = 1 + 2.0;

    auto result = Add_int(1, 2);



    add(1.0, 2.0);
    cout << result << endl;

    return 0;
}


