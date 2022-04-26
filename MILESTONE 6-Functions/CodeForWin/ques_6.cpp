// Write a C program to find all prime numbers between given interval using functions.

#include <iostream>
#include <math.h>
using namespace std;

bool primeCheck(int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void primeNumber(int n, int m)
{
    for (int i = n; i < m; i++)
    {
        if (primeCheck(i))
        {
            cout << i << endl;
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    primeNumber(n, m);
    return 0;
}