#include <iostream>
using namespace std;

int main()
{
    int m;
    cin >> m;
    for (int n = 1; n <= m; n++)
    {
        int sum = 0, temp, count = 0;

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
            cout << n << endl;
        }
    }

    return 0;
}