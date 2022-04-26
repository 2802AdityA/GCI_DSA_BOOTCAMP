#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int factorial(int n)
{

    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);

    int n;
    cin >> n;
    cout << n << "! = " << factorial(n) << endl;

    return 0;
}