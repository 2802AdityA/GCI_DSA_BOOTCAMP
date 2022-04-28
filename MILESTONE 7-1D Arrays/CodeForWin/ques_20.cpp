// Write a C program to sort even and odd elements of array separately.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int num;
    int e = 0, o = n - 1;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (num % 2 == 0)
        {
            arr[e] = num;
            e++;
        }
        else
        {
            arr[o] = num;
            o--;
        }
    }
    for (int i = 0; i < e; i++)
    {
        for (int j = i + 1; j < e; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = e; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}