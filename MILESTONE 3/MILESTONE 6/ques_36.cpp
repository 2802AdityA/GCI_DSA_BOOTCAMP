#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);
    int n, first = 0, second = 1;
    cin >> n;
    cout << first << endl
         << second << endl;
    for (int i = 1; i <= n - 2; i++)
    {
        int third = first + second;
        cout << third << endl;
        first = second;
        second = third;
    }
    return 0;
}