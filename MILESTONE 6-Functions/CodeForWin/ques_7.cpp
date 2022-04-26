// Write a C program to print all strong numbers between given interval using functions.

#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

bool StrongCheck(int n)
{
    int extra = n;
    int sum = 0;
    while (extra > 0)
    {
        sum += factorial(extra % 10);
        extra /= 10;
    }
    return (sum == n ? true : false);
}

int main()
{

    int n;
    cin >> n;

    cout << n << " is " << (StrongCheck(n) ? "a strong number" : "not a strong number") << endl;

    return 0;
}