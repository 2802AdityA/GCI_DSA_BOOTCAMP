#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, check = 1;
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            check = 0;
            break;
        }
        else
        {
            check = 1;
        }
    }
    if (n <= 1)
    {
        check = 0;
    }
    if (check == 1)
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not Prime" << endl;
    }
    return 0;
}