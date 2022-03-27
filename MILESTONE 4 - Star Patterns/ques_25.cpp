#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);
    for (int i = 0; i <= 10; i++)
    {
        int counter = i % 10;
        for (int j = 0; j <= 20; j++)
        {
            if (j < 10 - i || j > 10 + i)
            {
                cout << "  ";
            }
            else
            {
                if (counter > 9)
                {
                    counter = 0;
                }
                else if (counter < 0)
                {
                    counter = 9;
                }
                cout << counter << " ";
                if (j < 10)
                {
                    counter++;
                }
                else
                {
                    counter--;
                }
            }
        }
        cout << endl;
    }
    for (int i = 9; i >= 0; i--)
    {
        int counter = i;
        for (int j = 0; j <= 20; j++)
        {
            if (j < 10 - i || j > 10 + i)
            {
                cout << "  ";
            }
            else
            {
                if (counter > 9)
                {
                    counter = 0;
                }
                else if (counter < 0)
                {
                    counter = 9;
                }
                cout << counter << " ";
                if (j < 10)
                {
                    counter++;
                }
                else
                {
                    counter--;
                }
            }
        }
        cout << endl;
    }
    return 0;
}