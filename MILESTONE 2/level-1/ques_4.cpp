// from https://www.codesdope.com/practice/java-decide-if-or-else/

#include <iostream>
using namespace std;

int main()
{

    int salary, year_of_service;
    cout << "Enter the salary amount ";
    cin >> salary;
    cout << "Enter the year of service ";
    cin >> year_of_service;
    if (year_of_service > 5)
    {
        cout << "Your bonus is " << (salary * 5) / 100 << endl;
    }
    else
    {
        cout << "No bonus" << endl;
    }

    return 0;
}