// from https://www.codesdope.com/practice/java-decide-if-or-else/

#include <iostream>
using namespace std;

int main()
{

    int n, total_cost;
    cin >> n;
    if (n * 100 > 1000)
    {
        total_cost = (n * 100) - ((n * 100) / 10);
    }
    else
    {
        total_cost = n * 100;
    }
    cout << total_cost << endl;

    return 0;
}