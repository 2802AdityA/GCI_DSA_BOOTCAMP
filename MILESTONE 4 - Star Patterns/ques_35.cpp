#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);
    int counter = 0;
    for (int i = 1; i <= 7; i++)
    {
        if (i == counter + 4)
        {
            counter++;
            cout << endl;
            i = 0;
        }
        else if (i <= 4 - counter || (counter + i) % 2 == 0)
        {
            cout << " ";
        }
        else
        {
            cout << "*";
        }
    }

    return 0;
}