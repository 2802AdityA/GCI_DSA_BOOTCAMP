// Write a C program to search an element in an array.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int element;
    cin >> element;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            cout << element << " is found at index " << i << endl;
        }
    }
    return 0;
}