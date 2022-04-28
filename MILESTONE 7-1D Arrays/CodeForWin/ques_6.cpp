// Write a C program to count total number of even and odd elements in an array.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        (arr[i] % 2 == 0) ? even++ : odd++;
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    return 0;
}