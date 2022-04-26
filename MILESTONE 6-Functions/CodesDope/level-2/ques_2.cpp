#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

bool primeCheck(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void primefactors(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            primeCheck(i) ? cout << i << endl : cout << "";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);

    int n;
    cin >> n;
    primefactors(n);

    return 0;
}