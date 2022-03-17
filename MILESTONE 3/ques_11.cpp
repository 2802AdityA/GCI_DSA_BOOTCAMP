#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    cout << "last digit is " << n % 10 << endl;
    while (n >= 10)
    {
        n /= 10;
    }
    cout << "first digit is " << n << endl;

    return 0;
}