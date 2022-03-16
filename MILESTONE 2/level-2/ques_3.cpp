// from https://www.codesdope.com/practice/java-decide-if-or-else/

#include <iostream>
using namespace std;

int main()
{

    int n, reversed = 0, digit;
    cin >> n;

    while (n > 0)
    {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    cout << reversed << endl;
    return 0;
}