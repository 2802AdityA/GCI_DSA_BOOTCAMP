#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main()
{
    int decimal, counter = 0;
    cin >> decimal;
    int bin[28] = {0};
    while (decimal > 0)
    {
        bin[counter] = decimal % 2;
        decimal /= 2;
        counter++;
    }
    string binary = "";
    for (int i = counter - 1; i >= 0; i--)
    {
        binary += bin[i] + '0';
    }
    cout << binary;

    return 0;
}