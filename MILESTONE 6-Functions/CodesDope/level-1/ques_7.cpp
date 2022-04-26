#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define mod 1000000007

string primeCheck(int n)
{

    if (n == 1)
    {
        return "Neither Prime nor Composite";
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return "Composite";
        }
    }
    return "Prime";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);
    int n;
    cin >> n;

    cout << n << " is " << primeCheck(n) << endl;
    return 0;
}