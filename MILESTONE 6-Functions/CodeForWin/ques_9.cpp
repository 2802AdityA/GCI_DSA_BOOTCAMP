// Write a C program to print all perfect numbers between given interval using functions.

#include <iostream>
using namespace std;

bool perfectCheck(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        sum += (n % i == 0 ? i : 0);
    }

    return (sum == n ? true : false);
}

void Perfect(int n, int m)
{
    for (int i = n; i <= m; i++)
    {
        if (perfectCheck(i))
        {
            cout << i << endl;
        };
    }
}

int main()
{

    int n, m;
    cin >> n >> m;
    Perfect(n, m);

    return 0;
}