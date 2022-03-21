#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);

    for (int i = 1; i <= 5; i++)
    {
        int counter = 1;
        for (int j = 1; j <= 5; j++)
        {

            if (j >= 6 - i)
            {
                cout << counter;
                counter++;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = 1; i <= 4; i++)
    {
        int counter = 1;
        for (int j = 1; j <= 5; j++)
        {
            if (j > i)
            {
                cout << counter;
                counter++;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}