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
        int counter = i % 2 == 0 ? i : 1;
        for (int j = 1; j <= i; j++)
        {
            cout << counter;
            counter = i % 2 == 0 ? counter - 1 : counter + 1;
        }
        cout << endl;
    }

    return 0;
}