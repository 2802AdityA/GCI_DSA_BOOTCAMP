// Write a C program to merge two array to third array.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int firstArr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> firstArr[i];
    }
    int m;
    cin >> m;
    int secondArr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> secondArr[i];
    }
    int thirdArr[m + n];

    for (int firstIndex = 0, secondIndex = 0, i = 0; i < m + n; i++)
    {
        if (i < n)
        {
            thirdArr[i] = firstArr[firstIndex];
            firstIndex++;
        }
        else
        {
            thirdArr[i] = secondArr[secondIndex];
            secondIndex++;
        }
    }

    for (int i = 0; i < m + n; i++)
    {
        cout << thirdArr[i] << endl;
    }
    return 0;
}