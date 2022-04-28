// Write a program to print sum, average of all numbers, smallest and largest element of an array.

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    int sum = 0, max = INT32_MIN, min = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        max = arr[i] >= max ? arr[i] : max;
        min = arr[i] <= min ? arr[i] : min;
    }
    cout << "Sum: " << sum << endl;
    cout << "Average: " << sum / n << endl;
    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;
    return 0;
}