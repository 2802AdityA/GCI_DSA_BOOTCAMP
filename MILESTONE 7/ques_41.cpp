#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);

    string bin;
    cin >> bin;
    int length = bin.length();
    int binary[length];
    for (int i = 0; i < length; i++)
    {
        if (bin[i] == '1')
        {
            binary[i] = 1;
        }
        else if (bin[i] = '0')
        {
            binary[i] = 0;
        }
    }
    int decimal = 0, counter = 0;
    for (int i = length - 1; i >= 0; i--)
    {
        int base = 1;
        for (int j = 0; j < counter; j++)
        {
            base *= 2;
        }
        decimal += binary[i] * base;
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