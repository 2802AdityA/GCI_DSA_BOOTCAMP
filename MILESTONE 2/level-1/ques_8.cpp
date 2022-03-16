// from https://www.codesdope.com/practice/java-decide-if-or-else/

#include <iostream>
using namespace std;

int main()
{

    int classes_held, classes_attended;
    cout << "Enter the number of classes held: ";
    cin >> classes_held;
    cout << "Enter the number of classes attended: ";
    cin >> classes_attended;
    cout << (classes_attended * 100 / classes_held) << "% of classes attended" << endl;
    if ((classes_attended * 100 / classes_held) >= 75)
    {
        cout << "Allowed to sit in exam" << endl;
    }
    else
    {
        cout << "Not allowed to sit in exam" << endl;
    }

    return 0;
}