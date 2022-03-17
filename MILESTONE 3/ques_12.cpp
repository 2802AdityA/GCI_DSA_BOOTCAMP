#include <iostream>
using namespace std;

int main()
{

    int n, last_digit, first_digit;
    cin >> n;
    last_digit = n % 10;

    while (n >= 10)
    {
        n /= 10;
    }
    first_digit = n;

    cout << first_digit + last_digit << endl;
    return 0;
}