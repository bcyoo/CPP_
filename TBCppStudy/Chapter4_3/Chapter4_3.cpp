#include <iostream>

namespace a
{
    int my_Var(10);
}

namespace b
{
    int my_Var(20);
}

int main()
{
    //using namespace std;
    using std::cout;
    using std::endl;

    cout << "Hello" << endl;
    
    {
        using namespace a;
        cout << my_Var << endl;
    }
    {
        using namespace b;
        cout << my_Var << endl;
    }
    return 0;
}

