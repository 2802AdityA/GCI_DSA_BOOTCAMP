// Write a C program to count total number of negative elements in an array.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int neg = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i] < 0 ? neg++ : neg;
    }
    cout << neg << endl;

    return 0;
}