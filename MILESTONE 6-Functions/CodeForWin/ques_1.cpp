
// Write a C program to find cube of any number using function.

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int cube(int n)
{
    return (n * n * n);
}

int main()
{

    int n;
    cin >> n;

    cout << cube(n) << endl;

    return 0;
}