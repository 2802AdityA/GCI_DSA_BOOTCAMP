#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

string age(int n)
{
    string vote = n >= 18 ? "eligible" : "not eligible";
    return vote;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);

    int n;
    cin >> n;
    cout << n << ": " << age(n) << " to vote." << endl;

    return 0;
}