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
        int counter = 1;
        for (int j = 1; j <= 7; j++)
        {

            if (j < 5 - i || j > 3 + i)
            {
                cout << " ";
            }
            else
            {
                if (j < 5)
                {
                    cout << counter;
                    counter++;
                }
                else
                {
                    cout << char(60 + j);
                }
            }
        }
        cout << endl;
    }

    return 0;
}