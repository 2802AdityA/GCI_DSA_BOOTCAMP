// Initialize a 2D array of 3*3 matrix. E.g.-
// 1	2	3
// 4	5	6
// 7	8	9

// Check if the matrix is symmetric or not.

#include <iostream>
using namespace std;

int main()
{

    int row, column;
    cin >> row >> column;
    int a[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < row - i; i++)
    {
        for (int j = 0; j < column - j; j++)
        {
            if (a[i][j] != a[j][i])
            {
                cout << "Not Symmetric" << endl;
                return 0;
            }
        }
    }
    cout << "Symmetric" << endl;

    return 0;
}