#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
// SAW THE SOLUTION FOR THIS QUESTION
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);

    int extra = 0, n, counter;
    for (int i = 1; i <= 5; i++)
    {
        if (i % 2 == 1)
        {
            extra++;
        }
        else
        {
            extra--;
            extra += i;
        }
        counter = 1;
        n = extra;
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j <= 2 * i - 1)
            {
                if (counter == 1)
                {
                    cout << n;
                    if (i % 2)
                    {
                        n++;
                        extra++;
                    }
                    else
                    {
                        n--;
                    }
                }
                else
                {
                    cout << "*";
                }
                counter = 1 - counter;
            }
        }
        cout << endl;
    }

    return 0;
}