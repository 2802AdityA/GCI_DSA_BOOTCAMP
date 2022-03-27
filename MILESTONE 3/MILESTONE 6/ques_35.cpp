#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);
    int m;
    cin >> m;
    for (int n = 1; n <= m; n++)
    {
        int temp, sum = 0;
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
            cout << n << endl;
        }
    }
    return 0;
}