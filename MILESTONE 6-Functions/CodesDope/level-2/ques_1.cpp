#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

void multiplication(int n, int counter)
{
    if (counter > 1)
    {
        multiplication(15, (counter - 1));
    }
    cout << counter * n << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);

    multiplication(15, 10);

    return 0;
}