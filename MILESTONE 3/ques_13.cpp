#include <iostream>
using namespace std;

int main()
{
    int n, middle, temp, last_digit, first_digit, count = 1;
    cin >> n;
    temp = n;
    last_digit = n % 10;
    while (n > 10)
    {
        n /= 10;
        count *= 10;
    }
    first_digit = temp / count;
    middle = (temp - first_digit * count - last_digit) / 10;
    cout << first_digit + (middle * 10) + (last_digit * count) << endl;
    return 0;
}