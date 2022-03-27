#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);

    for (int i = 5; i >= 1; i--)
    {
        int counter = i;
        for (int j = 1; j <= 5; j++)
        {
            if (counter <= 5)
            {
                cout << counter;
            }
            else
            {
                cout << "5";
            }
            counter++;
        }
        cout << endl;
    }

    return 0;
}