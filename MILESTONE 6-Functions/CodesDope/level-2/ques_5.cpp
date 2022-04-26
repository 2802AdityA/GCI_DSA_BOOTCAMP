#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else
    {
        return a * power(a, b - 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);

    int a, b;
    cin >> a >> b;
    cout << power(a, b) << endl;
    return 0;
}