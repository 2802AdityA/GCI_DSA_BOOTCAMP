
// Write a C program to find maximum and minimum between two numbers using functions.

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

void compare(int a, int b)
{

    if (a == b)
    {
        cout << "Both numbers are same" << endl;
    }
    else
    {
        cout << (a > b ? a : b) << " is maximum" << endl;
        cout << (a < b ? a : b) << " is minimum" << endl;
    }
}

int main()
{

    int a, b;
    cin >> a >> b;

    compare(a, b);

    return 0;
}