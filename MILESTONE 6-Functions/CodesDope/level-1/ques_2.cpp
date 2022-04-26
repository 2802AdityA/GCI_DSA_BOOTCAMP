#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
int product(int a, int b)
{
    int product = a * b;
    return product;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);

    int n, m;
    cin >> n >> m;
    cout << product(n, m) << endl;
    return 0;
}