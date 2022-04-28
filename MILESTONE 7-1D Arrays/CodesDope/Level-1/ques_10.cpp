// Consider an integer array, the number of elements in which is determined by the user. The elements are also taken as input from the user. Write a program to find those pair of elements that has the maximum and minimum difference among all element pairs.

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
        max = arr[i] >= max ? arr[i] : max;
        min = arr[i] <= min ? arr[i] : min;
    }

    cout << "Minimum: " << min << " " << max << ": " << min - max << endl;
    cout << "Maximum: " << max << " " << min << ": " << max - min << endl;
    return 0;
}
