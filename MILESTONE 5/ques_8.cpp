#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);

    for (int i = 5; i >= 1; i--)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}