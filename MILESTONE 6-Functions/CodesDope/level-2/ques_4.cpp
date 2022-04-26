#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

bool perfect(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        sum = n % i == 0 ? sum + i : sum;
    }
    return (sum == n ? true : false);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);

    for (int i = 1; i <= 1000; i++)
    {
        perfect(i) ? cout << i << endl : cout << "";
    }

    return 0;
}