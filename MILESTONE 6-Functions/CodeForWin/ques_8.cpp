// Write a C program to print all Armstrong numbers between given interval using functions.

#include <iostream>
using namespace std;

int power(int e, int n)
{
    int answer = e;
    for (int i = 1; i < n; i++)
    {
        answer *= e;
    }
    return answer;
}

bool armstrongCheck(int n)
{
    int extra = n;
    int count = 0;
    while (extra > 0)
    {
        extra /= 10;
        count++;
    }
    extra = n;
    int sum = 0;
    while (extra > 0)
    {
        int digit = extra % 10;

        sum += power(digit, count);
        extra /= 10;
    }
    return (sum == n ? true : false);
}

void armstrong(int n, int m)
{
    for (int i = n; i <= m; i++)
    {
        if (armstrongCheck(i))
        {
            cout << i << endl;
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    armstrong(n, m);
    return 0;
}