// from https://www.codesdope.com/practice/java-decide-if-or-else/

#include <iostream>
using namespace std;

int main()
{
    string c;
    int l, b;
    cout << "Enter the dimesions ";
    cin >> l >> b;
    c = l == b ? "Square" : "Not a Square";
    cout << c << endl;
    return 0;
}