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
    counter = 0;
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