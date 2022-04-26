#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define mod 1000000007

float circumference(int r)
{
    float circumference = 2 * M_PI * r;
    return circumference;
}

float area(int r)
{
    float area = M_PI * r * r;
    return area;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(2);

    int r;
    cin >> r;
    cout << "Circumference: " << circumference(r) << endl;
    cout << "Area: " << area(r) << endl;
    return 0;
}