#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 8; j++)
        {
            if (j <= i - 1 || j >= 9 - i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}