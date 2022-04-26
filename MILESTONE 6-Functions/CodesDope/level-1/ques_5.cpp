#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

string numCheck(int n)
{
    string num = n % 2 == 0 ? "even" : "odd";
    return num;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);

    int n;
    cin >> n;
    cout << n << " is " << numCheck(n) << endl;

    return 0;
}