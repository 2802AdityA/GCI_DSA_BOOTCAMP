// Write a C program to check whether a number is prime, Armstrong or perfect number using functions.

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

bool perfectCheck(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        sum += (n % i == 0 ? i : 0);
    }

    return (sum == n ? true : false);
}

int main()
{

    int n;
    cin >> n;
    cout << n << " is " << (primeCheck(n) ? "prime" : "not prime") << endl;
    cout << n << " is " << (armstrongCheck(n) ? "an armstrong" : "not an armstrong") << " number" << endl;
    cout << n << " is " << (perfectCheck(n) ? "perfect number" : "not a perfect number") << endl;
    return 0;
}