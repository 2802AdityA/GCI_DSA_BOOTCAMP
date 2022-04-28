// Take 10 integer inputs from user and store them in an array. Now, copy all the elements in another array but in reverse order.

#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int reverse[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        reverse[9 - i] = arr[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cout << reverse[i] << endl;
    }
    return 0;
}