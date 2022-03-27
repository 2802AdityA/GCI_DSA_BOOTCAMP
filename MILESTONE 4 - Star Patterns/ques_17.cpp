#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (j > (5 - i) && j < (5 + i))
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    for (int i = 2; i < 6; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (j > i && j < 10 - i)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }

    return 0;
}