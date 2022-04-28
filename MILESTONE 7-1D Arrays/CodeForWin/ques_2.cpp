// Write a C program to print all negative elements in an array.

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
        if (arr[i] < 0)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}