#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (j <= 4 - i || j >= 4 + i)
            {
                cout << " ";
            }
            else if (j <= 4)
            {
                cout << char(60 + j + i);
            }
            else if (j > 4)
            {
                cout << char(68 - (j - i));
            }
        }
        cout << endl;
    }
    return 0;
}