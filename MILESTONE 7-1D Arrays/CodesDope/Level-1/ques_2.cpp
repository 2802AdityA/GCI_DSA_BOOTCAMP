// Take 10 integer inputs from user and store them in an array. Again ask user to give a number. Now, tell user whether that number is present in array or not.

#include <iostream>
using namespace std;

bool Present(int n, int arr[10])
{
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == n)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    int n;
    cin >> n;

    cout << n << " is " << (Present(n, arr) ? "present" : "not present") << " in the array" << endl;

    return 0;
}