#include <iostream>
using namespace std;

int main()
{

    int n, reverse = 0, m;
    cin >> n;
    m = n;
    while (n > 0)
    {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    if (reverse == m)
    {
        cout << m << " is a palindrome number" << endl;
    }
    else
    {
        cout << m << " is not a palindrome number" << endl;
    }
    return 0;
}