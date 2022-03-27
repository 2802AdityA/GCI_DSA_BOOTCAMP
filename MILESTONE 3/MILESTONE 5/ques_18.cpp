#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);

    for (int i = 1; i <= 9; i += 2)
    {
        for (int j = i; j <= 9; j += 2)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}