#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);

    int decimal, counter = 0;
    cin >> decimal;

    int octal[10];

    while (decimal > 0)
    {
        octal[counter] = decimal % 8;
        decimal /= 8;
        counter++;
    }
    int oct = 0;
    for (int i = counter - 1; i >= 0; i--)
    {
        oct = oct * 10 + octal[i];
    }
    cout << oct;
    return 0;
}