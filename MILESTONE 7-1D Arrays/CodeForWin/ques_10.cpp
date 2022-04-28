// Write a C program to delete an element from an array at specified position.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int pos;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> pos;
    pos--;
    for (int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
