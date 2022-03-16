// from https://www.codesdope.com/practice/java-decide-if-or-else/

#include <iostream>
using namespace std;

int main()
{
    int age;
    char sex, marital_status;
    cout << "Enter your Age: ";
    cin >> age;
    cout << "Enter your sex (M/F): ";
    cin >> sex;
    cout << "Enter your martial status (Y/N): ";
    cin >> marital_status;

    if (sex == 'F')
    {
        cout << "Work only in Urban area" << endl;
    }
    else if (sex == 'M')
    {
        if (age >= 20 && age < 40)
        {
            cout << "Work anywhere" << endl;
        }
        else if (age >= 40 && age < 60)
        {
            cout << "Work only in Urban area" << endl;
        }
        else
        {
            cout << "ERROR" << endl;
        }
    }
    else
    {
        cout << "ERROR" << endl;
    }
    return 0;
}