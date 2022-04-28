// Write a program to check if elements of an array are same or not it read from front or back.

#include <iostream>
using namespace std;

bool Palindrome(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != arr[size - 1 - i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array is " << (Palindrome(arr, n) ? "a" : "not a") << " palindrome " << endl;
    return 0;
}