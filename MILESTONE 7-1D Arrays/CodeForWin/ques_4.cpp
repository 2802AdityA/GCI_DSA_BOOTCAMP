// Write a C program to find maximum and minimum element in an array

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int max = INT32_MIN, min = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        max = arr[i] > max ? arr[i] : max;
        min = arr[i] < min ? arr[i] : min;
    }
    cout << max << " " << min << endl;
    return 0;
}