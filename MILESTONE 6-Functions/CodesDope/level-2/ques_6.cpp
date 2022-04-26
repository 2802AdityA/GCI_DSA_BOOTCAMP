#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int taxCalculator(int x, int y)
{
    if (y > 0 && y <= 100000)
    {
        x -= y;
    }
    else
    {
        x -= 100000;
    }

    if (x > 0 && x <= 100000)
    {
        return 0;
    }
    else if (100000 < x && x <= 200000)
    {
        return ((10 * (x - 100000)) / 100);
    }
    else if (200000 < x && x <= 500000)
    {
        return 10000 + ((20 * (x - 200000)) / 100);
    }
    else
    {
        return 10000 + 60000 + ((30 * (x - 500000)) / 100);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);

    int grossIncome, savings;
    cin >> grossIncome >> savings;

    cout << taxCalculator(grossIncome, savings) << endl;

    return 0;
}