#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int maximum(int a, int b, int c)
{
    int maxNum = a > b ? a : b;
    maxNum = maxNum > c ? maxNum : c;
    return maxNum;
}

int minimum(int a, int b, int c)
{
    int minNum = a < b ? a : b;
    minNum = minNum < c ? minNum : c;
    return minNum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);

    int a, b, c;
    cin >> a >> b >> c;

    cout << "Maximum: " << maximum(a, b, c) << endl;
    cout << "Minimum: " << minimum(a, b, c) << endl;

    return 0;
}