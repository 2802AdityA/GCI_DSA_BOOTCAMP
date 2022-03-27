#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);

    string binary, answer = "";
    cin >> binary;
    for (int i = 0; i < binary.length(); i++)
    {
        if (binary[i] == '0')
        {
            answer += '1';
        }
        else if (binary[i] == '1')
        {
            answer += '0';
        }
    }
    cout << answer << endl;
    return 0;
}