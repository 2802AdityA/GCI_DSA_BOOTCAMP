#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, m, common_factor = 1, upper;
    cin >> n >> m;
    upper = n / 2 > m / 2 ? n / 2 : m / 2;
    for (int i = 1; i <= upper; i++)
    {
        if (n % i == 0 && m % i == 0 && i >= common_factor)
        {
            common_factor = i;
        }
    }
    cout << common_factor << endl;
    return 0;
}