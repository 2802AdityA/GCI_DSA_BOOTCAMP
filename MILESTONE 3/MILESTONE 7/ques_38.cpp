#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);

    string binary;
    int carry = 1;
    cin >> binary;
    char one[binary.length()];
    for (int i = 0; i < binary.length(); i++)
    {
        if (binary[i] == '0')
        {
            one[i] = '1';
        }
        else if (binary[i] == '1')
        {
            one[i] = '0';
        }
    }
    char two[binary.length() + 1] = {'0'};
    for (int i = (binary.length()); i > 0; i--)
    {
        int j = i - 1;
        if (one[j] == '1' && carry == 1)
        {
            if (i == 1)
            {
                two[j] = '1';
                two[i] = '0';
                carry = 0;
            }
            else
            {
                two[i] = '0';
                carry = 1;
            }
        }
        else if (one[j] == '0' && carry == 1)
        {
            two[i] = '1';
            carry = 0;
        }
        else
        {
            two[i] = one[j];
        }
    }
    for (int i = 0; i <= binary.length(); i++)
    {
        cout << two[i];
    }

    return 0;
}