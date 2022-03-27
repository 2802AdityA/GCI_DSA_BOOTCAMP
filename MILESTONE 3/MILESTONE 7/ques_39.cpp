#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);

    string binary;
    cin >> binary;
    int decimal = 0, counter = 0;
    int length = binary.length();
    int bin[length];
    for (int i = (length - 1); i >= 0; i--)
    {
        if (binary[i] == '1')
        {
            bin[i] = 1;
        }
        else if (binary[i] == '0')
        {
            bin[i] = 0;
        }
    }
    for (int i = length - 1; i >= 0; i--)
    {
        int base = 1;
        for (int j = 0; j < counter; j++)
        {
            base *= 2;
        }
        decimal += bin[i] * base;
        counter++;
    }

    counter = 0;
    int octal[10];
    int oct = 0;
    while (decimal > 0)
    {
        octal[counter] = decimal % 8;
        decimal /= 8;
        counter++;
    }
    for (int i = counter - 1; i >= 0; i--)
    {
        oct = oct * 10 + octal[i];
    }
    cout << oct;
    return 0;
}