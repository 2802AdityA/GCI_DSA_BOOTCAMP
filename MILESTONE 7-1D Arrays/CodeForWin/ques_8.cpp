// Write a C program to copy all elements from an array to another array.

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    int copy[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        copy[i] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}