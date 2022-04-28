// Input any number. Find the sum of the digits of the number using a recursive function.

#include <iostream>
using namespace std;

int digit(int n)
{
    int sum = 0;
    if (n > 0)
    {
        int Ldigit = digit(n / 10);

        sum += n % 10 + Ldigit;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    cout << digit(n) << endl;
    return 0;
}