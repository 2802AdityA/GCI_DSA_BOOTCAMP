#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);

    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if ((j == 1 && i >= 5) || (j == 2 && i > 5 && i < 9) || (j == 3 && i > 2 && i < 8) || (j == 4 && i > 1 && i < 5) || (j == 5 && i <= 5))
            {
                if (j == 3 && i >= 4 && i <= 6)
                {
                    cout << "| ";
                }
                else
                {
                    cout << "* ";
                }
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}