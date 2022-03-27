#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);

    string hexa;
    cin >> hexa;
    int decimal = 0, counter = 0;
    for (int i = hexa.length() - 1; i >= 0; i--)
    {
        int digit;
        if (int(hexa[i]) >= 65 && int(hexa[i]) <= 70)
        {
            digit = int(hexa[i] - 55);
        }
        else if ((hexa[i] - '0') <= 9)
        {
            digit = (hexa[i] - '0');
        }
        int base = 1;
        for (int j = 0; j < counter; j++)
        {
            base *= 16;
        }
        decimal += base * digit;
        counter++;
    }
    cout << decimal << endl;

    return 0;
}