#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int max = a > b ? a : b;

    int lcm;
    while (true)
    {
        if (max % a == 0 && max % b == 0)
        {
            lcm = max;
            break;
        }
        max += max;
    }

    cout << "LCM of " << a << " and " << b << " is " << lcm << endl;
    return 0;
}