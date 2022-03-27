#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);
    int extra = 64;
    for (int i = 1; i <= 5; i++)
    {
        extra += i;
        int counter = extra;
        for (int j = 1; j <= 5; j++)
        {
            if (j <= 5 - i)
            {
                cout << " ";
            }
            else
            {
                cout << char(counter);
                counter--;
            }
        }
        cout << endl;
    }

    return 0;
}