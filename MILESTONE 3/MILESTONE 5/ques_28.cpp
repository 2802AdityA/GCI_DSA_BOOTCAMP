#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n, check = 1, sum = 0;
    cin >> n;

    for (int j = 2; j <= n; j++)
    {
        for (int i = 2; i <= sqrt(j); i++)
        {
            if (j % i == 0)
            {
                check = 0;
                break;
            }
            else
            {
                check = 1;
            }
        }

        if (check == 1)
        {
            sum += j;
        }
    }
    cout << sum << endl;

    return 0;
}
