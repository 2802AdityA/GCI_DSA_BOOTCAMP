#include <iostream>
using namespace std;

int main()
{
    string c;
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << n << " is zero" << endl;
    }
    else
    {
        c = n > 0 ? "positive" : "negative";
        cout << n << " is " << c << endl;
    }
    return 0;
}