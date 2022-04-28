// Write a C program to read and print elements of array. - using recursion.

#include <iostream>
using namespace std;

int print(int arr[], int i, int n)
{
    if (i >= n)
    {
        return 0;
    }
    cout << arr[i] << " ";
    print(arr, i + 1, n);

    return 0;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    print(arr, 0, n);
    cout << endl;
    return 0;
}