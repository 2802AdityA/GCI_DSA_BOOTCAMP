// from https://www.codesdope.com/practice/java-decide-if-or-else/

#include <iostream>
using namespace std;

int main()
{

    char n;
    cin >> n;
    if (int(n) >= 97 && int(n) <= 122)
    {
        cout << n << " is in lowercase" << endl;
    }
    else if (int(n) >= 65 && int(n) <= 90)
    {
        cout << n << " is in uppercase" << endl;
    }

    return 0;
}