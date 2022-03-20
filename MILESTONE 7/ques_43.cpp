#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);

    int octal, decimal = 0, counter = 0;
    cin >> octal;
    while (octal > 0)
    {
        int digit = octal % 10;
        int base = 1;
        for (int i = 0; i < counter; i++)
        {
            base *= 8;
        }
        decimal += (base * digit);
        octal /= 10;
        counter++;
    }
    cout << decimal << endl;

    return 0;
}