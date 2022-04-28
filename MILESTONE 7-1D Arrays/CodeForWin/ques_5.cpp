// Write a C program to find second largest element in an array.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int max = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        max = arr[i] > max ? arr[i] : max;
    }

    int second = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        second = (arr[i] < max && arr[i] > second) ? arr[i] : second;
    }
    cout << second << endl;
    return 0;
}