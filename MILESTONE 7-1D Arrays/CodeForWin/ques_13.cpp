// Write a C program to count total number of duplicate elements in an array.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int frequency[1000] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        frequency[arr[i]] += 1;
    }
    int sum = 0;
    for (int i = 0; i < 1000; i++)
    {
        if (frequency[i] > 1)
        {
            sum += (frequency[i] - 1);
        }
    }
    cout << sum << endl;
    return 0;
}