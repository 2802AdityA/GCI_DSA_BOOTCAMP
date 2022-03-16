// from https://www.codesdope.com/practice/java-decide-if-or-else/

#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << a << endl;
    }
    else if (a == b)
    {
        cout << "Both are same" << endl;
    }
    else
    {
        cout << b << endl;
    }

    return 0;
}