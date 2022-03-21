#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
// SAW THE SOLUTION FOR THIS QUESTION
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);
    int counter, extra = 1;
    for (int i = 1; i <= 5; i++)
    {
        counter = extra;
        for (int j = 1; j <= i; j++)
        {
            cout << counter;
            counter = counter - (5 - i + j);
        }

        cout << endl;
        extra = extra + 5 + 1 - i;
    }

    return 0;
}