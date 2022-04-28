// Write a C program to count frequency of each element in an array.

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
    for (int i = 0; i < 1000; i++)
    {
        if (frequency[i] != 0)
        {
            cout << i << ": " << frequency[i] << endl;
        }
    }
    return 0;
}