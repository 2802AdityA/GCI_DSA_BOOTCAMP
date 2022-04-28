// Find the largest and smallest elements of an array.

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
    int max = arr[0], min = arr[0];
    for (int i = 0; i < n; i++)
    {
        max = max >= arr[i] ? max : arr[i];
        min = min <= arr[i] ? min : arr[i];
    }
    cout << "Maximum number: " << max << endl;
    cout << "Minimum number: " << min << endl;

    return 0;
}