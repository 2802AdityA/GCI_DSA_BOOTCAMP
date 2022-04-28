// Write a program to find the sum and product of all elements of an array.

#include <iostream>
using namespace std;

int main()
{
    int n;
    int arr[n];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long int product = 1, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }

    cout << "sum: " << sum << endl;
    cout << "product: " << product << endl;

    return 0;
}