
// Write a C program to check whether a number is even or odd using functions.

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

string check(int n)
{
    return (n % 2 == 0 ? "Even" : "Odd");
}

int main()
{

    int n;
    cin >> n;
    cout << n << " is " << check(n) << endl;

    return 0;
}