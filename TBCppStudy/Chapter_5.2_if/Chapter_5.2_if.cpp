#include <iostream>



int min(int x, int y)
{
    if (x > y) return y;
    else return x;

    return (x > y) ? y : x; // ture면 y, flase면 x
}

int main()
{
    using namespace std;

    /*int x, y;
    cin >> x >> y;


    if (x > 10)
    {
        cout << x << " is greater than 10" << endl;
    }
    else
    {
        cout << x << " not is greathe than 10" << endl;
    }

    if (x > 10)
        cout << "x is greater than 10" << endl;
    else if (x < 10)
        cout << "x is less than 10" << endl;
    else
        cout << "x is exactly 10" << endl;

    if (x >= 10)
    {
        if (x >= 20)
            cout << x << " x is between 10 and 20 " << endl;
    }
    else
        cout << "..." << endl;

    if (x == y)
    {
        cout << " same nubers" << endl;
    }
    else
    {
        cout << "not same" << endl;
    }*/

    /*   int x;
    cin >> x;

    if (x > 10)
    {
        cout << "A" << endl;
    }
    else if (x == -1)
    {
        return 0;
    }
    else if (x < 0)
    {
        cout << "B" << endl;
    }

    cout << "Hello" << endl;*/

    int x;

    // null statement
    if (x > 10); // ;해줄 경우 항상 x = 1
    {
        x = 1;
    }

    return 0;
}

