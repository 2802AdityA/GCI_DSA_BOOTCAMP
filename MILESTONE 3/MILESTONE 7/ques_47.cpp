#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);

    int decimal, counter = 0;
    cin >> decimal;

    char hexa[8];
    while (decimal > 0)
    {
        int digit = decimal % 16;
        if (digit > 9)
        {
            hexa[counter] = char(digit + 55);
        }
        else
        {
            hexa[counter] = digit + '0';
        }
        counter++;
        decimal /= 16;
    }
    string hexadecimal = "";
    for (int i = counter - 1; i >= 0; i--)
    {
        hexadecimal += hexa[i];
    }
    cout << hexadecimal << endl;

    return 0;
}