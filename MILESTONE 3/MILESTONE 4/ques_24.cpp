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

    int hcf = ((a * b) / lcm);
    cout << "HCF of " << a << " and " << b << " is: " << hcf << endl;
    return 0;
}