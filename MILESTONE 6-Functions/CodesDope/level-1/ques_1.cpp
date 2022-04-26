#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
int sum(int a, int b)
{
    int sum = a + b;
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);

    int n, m;
    cin >> n >> m;
    cout << sum(n, m) << endl;
    return 0;
}