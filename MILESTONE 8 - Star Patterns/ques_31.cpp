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
        int number = 1;
        int character = 65;
        for (int j = 1; j <= 7; j++)
        {
            if (j < 5 - i || j > 3 + i)
            {
                cout << " ";
            }
            else
            {
                if ((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1))
                {
                    cout << " ";
                }
                else
                {
                    if (i % 2 == 1)
                    {
                        cout << number;
                        number++;
                    }
                    else
                    {
                        cout << char(character);
                        character++;
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}