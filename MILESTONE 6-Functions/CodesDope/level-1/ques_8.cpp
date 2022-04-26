#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

string grade(int marks)
{
    if (marks >= 91 && marks <= 100)
    {
        return "AA";
    }
    else if (marks >= 81 && marks <= 90)
    {
        return "AB";
    }
    else if (marks >= 71 && marks <= 80)
    {
        return "BB";
    }
    else if (marks >= 61 && marks <= 70)
    {
        return "BC";
    }
    else if (marks >= 51 && marks <= 60)
    {
        return "CD";
    }
    else if (marks >= 41 && marks <= 50)
    {
        return "DD";
    }
    else if (marks <= 40)
    {
        return "Fail";
    }
    return "Wrong Input";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);

    int n;
    cin >> n;
    cout << n << ": " << grade(n) << endl;

    return 0;
}