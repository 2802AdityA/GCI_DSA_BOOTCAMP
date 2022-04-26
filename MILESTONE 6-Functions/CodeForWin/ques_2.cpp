
// Write a C program to find diameter, circumference and area of circle using functions.

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int diameter(int r)
{
    return 2 * r;
}

float circumference(int r)
{
    return (2 * 3.14 * r);
}

float area(int r)
{
    return (3.14 * r * r);
}

int main()
{

    int radius;
    cin >> radius;

    cout << "Diameter: " << diameter(radius) << endl;
    cout << "Circumference: " << circumference(radius) << endl;
    cout << "Area: " << area(radius) << endl;

    return 0;
}