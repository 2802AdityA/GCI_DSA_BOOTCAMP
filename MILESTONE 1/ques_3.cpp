#include <iostream>
using namespace std;

int main()
{
    string c;
    int n;
    cin >> n;
    c = n % 2 == 0 ? "even" : "odd";
    cout << n << " is " << c << endl;
    return 0;
}