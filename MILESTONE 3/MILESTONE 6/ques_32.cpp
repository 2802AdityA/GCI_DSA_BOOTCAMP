#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);

    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        cout << n << " is a perfect number" << endl;
    }
    else
    {
        cout << n << " is not a perfect number" << endl;
    }
    return 0;
}