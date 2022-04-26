#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int fibo(int x)
{
    if (x == 0)
    {
        return 0;
    }
    else if (x == 1)
    {
        return 1;
    }
    else
    {
        return fibo(x - 1) + fibo(x - 2);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);

    int n;
    cin >> n;
    cout << fibo(n) << endl;

    return 0;
}
