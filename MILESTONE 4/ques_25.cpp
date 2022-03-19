#include <iostream>
using namespace std;

int main()
{
    int n, m, i = 2, upper, lcm = 1;
    cin >> n >> m;
    cout << "LCM of " << n << " and " << m << " is: ";
    upper = n / 2 > m / 2 ? n / 2 : m / 2;
    while (i <= upper)
    {
        if (n % i == 0 && m % i == 0)
        {
            lcm *= i;
            n /= i;
            m /= i;
            upper = n > m ? n : m;
            i = 2;
        }
        else if (n % i == 0 && m % i != 0)
        {
            lcm *= i;
            n /= i;
            upper = n > m ? n : m;
            i = 2;
        }
        else if (n % i != 0 && m % i == 0)
        {
            lcm *= i;
            m /= i;
            upper = n > m ? n : m;
            i = 2;
        }
        else
        {
            i++;
        }
    }

    cout << lcm << endl;
    return 0;
}