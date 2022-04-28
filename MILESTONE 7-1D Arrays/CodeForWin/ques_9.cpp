// Write a C program to insert an element in an array.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    int num, pos;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> num >> pos;

    for (int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = num;

    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
