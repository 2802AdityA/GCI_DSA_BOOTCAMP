// from https://www.codesdope.com/practice/java-decide-if-or-else/

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    if (n >= 0)
    {
        cout << n << endl;
    }
    else
    {
        cout << n * (-1) << endl;
    }

    return 0;
}