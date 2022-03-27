#include <iostream>
using namespace std;

int main()
{

    int n, sum = 0, temp, count = 0;
    cin >> n;
    temp = n;

    while (temp > 0)
    {
        temp /= 10;
        count++;
    }
    temp = n;

    while (temp > 0)
    {

        int digit = temp % 10, digit_product = 1;
        temp /= 10;
        for (int i = 0; i < count; i++)
        {
            digit_product *= digit;
        }
        sum += digit_product;
    }
    if (sum == n)
    {
        cout << n << " is an armstrong number" << endl;
    }
    else
    {
        cout << n << " is not an armstrong number" << endl;
    }

    return 0;
}