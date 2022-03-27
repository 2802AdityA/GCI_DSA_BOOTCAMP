#include <iostream>
using namespace std;

int main()
{
    int base, power, answer = 1;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the power: ";
    cin >> power;
    for (int i = 0; i < power; i++)
    {
        answer *= base;
    }
    cout << answer << endl;
    return 0;
}