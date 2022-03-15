#include <iostream>
using namespace std;

int main()
{

    int a, b, c;
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << "a is the oldest" << endl;
            if (b > c)
            {
                cout << "c is the youngest" << endl;
            }
            else
            {
                cout << "b is the youngest" << endl;
            }
        }
        else
        {
            cout << "c is the oldest" << endl;
            cout << "b is the youngest" << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "b is the oldest" << endl;
            if (a > c)
            {
                cout << "c is the youngest" << endl;
            }
            else
            {
                cout << "a is the youngest" << endl;
            }
        }
        else
        {
            cout << "c is the oldest" << endl;
            cout << "a is the youngest" << endl;
        }
    }
    return 0;
}