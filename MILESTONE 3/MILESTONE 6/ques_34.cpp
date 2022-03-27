#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);
    int n, temp, sum = 0;
    cin >> n;
    temp = n;
    while (temp > 0)
    {
        int digit = temp % 10, factorial = 1;
        for (int i = 2; i <= digit; i++)
        {
            factorial *= i;
        }
        sum += factorial;
        temp /= 10;
    }
    if (sum == n)
    {
        cout << n << " is a strong number" << endl;
    }
    else
    {
        cout << n << " is a not strong number" << endl;
    }
    return 0;
}