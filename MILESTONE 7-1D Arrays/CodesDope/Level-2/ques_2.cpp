// Write a program to shift every element of an array to circularly right. E.g.- INPUT : 1 2 3 4 5 OUTPUT : 5 1 2 3 4

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            cin >> arr[0];
        }
        else
        {
            cin >> arr[i + 1];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}