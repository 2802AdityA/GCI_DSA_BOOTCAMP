// Take 20 integer inputs from user and print the following:
// number of positive numbers
// number of negative numbers
// number of odd numbers
// number of even numbers
// number of 0.

#include <iostream>
using namespace std;

int main()
{
    int arr[20];
    for (int i = 0; i < 20; i++)
    {
        cin >> arr[i];
    }
    int positive = 0, negative = 0, odd = 0, even = 0, zero = 0;

    for (int i = 0; i < 20; i++)
    {
        if (arr[i] == 0)
        {
            positive++;
            zero++;
            even++;
        }
        else if (arr[i] > 0)
        {
            positive++;
            (arr[i] % 2 == 0) ? even++ : odd++;
        }
        else
        {
            negative++;
            (arr[i] % 2 == 0) ? even++ : odd++;
        }
    }

    cout << "Postive numbers: " << positive << endl;
    cout << "Negative numbers: " << negative << endl;
    cout << "Odd numbers: " << odd << endl;
    cout << "Even numbers: " << even << endl;
    cout << "Numbers of Zero: " << zero << endl;

    return 0;
}