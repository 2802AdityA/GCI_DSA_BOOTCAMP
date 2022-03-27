// from https://www.codesdope.com/practice/java-decide-if-or-else/

#include <iostream>
using namespace std;

int main()
{
    int x = 2, y = 5, z = 0;
    cout << (x == 2) << endl;           // 1
    cout << (x != 5) << endl;           // 1
    cout << (x != 5 && y >= 5) << endl; // 1
    cout << (z != 0 || x == 2) << endl; // 1
    cout << (!(y < 10)) << endl;        // 0

    return 0;
}