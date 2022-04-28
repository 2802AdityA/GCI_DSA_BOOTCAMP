// Write a C program to put even and odd elements of array in two separate array.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int odd[n];
    int even[n];
    int e = 0, o = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            even[e] = arr[i];
            e++;
        }
        else
        {
            odd[o] = arr[i];
            o++;
        }
    }
    for (int i = 0; i < e; i++)
    {
        cout << even[i] << endl;
    }
    for (int i = 0; i < o; i++)
    {
        cout << odd[i] << endl;
    }
    return 0;
}