#include <iostream>
using namespace std;

int main()
{

    int rows, columns;
    cin >> rows >> columns;
    char variable = 'X';
    char arr[rows][columns];
    int startRow = 0, startColumn = 0, endRow = rows, endColumn = columns;
    int counter = 0;
    // int registered = 0;
    while (startRow < endRow && startColumn < endColumn)
    {
        if (counter == 0)
        {
            for (int j = startColumn; j < endColumn; j++)
            {
                arr[startRow][j] = variable;
            }
            counter = 1;
        }
        else if (counter == 1)
        {
            for (int i = startRow + 1; i < endRow; i++)
            {
                arr[i][endColumn - 1] = variable;
            }
            counter = 2;
        }

        else if (counter == 2)
        {
            for (int j = endColumn - 2; j >= startColumn; j--)
            {
                arr[endRow - 1][j] = variable;
            }
            counter = 3;
        }

        else if (counter == 3)
        {
            for (int i = endRow - 2; i > startRow; i--)
            {
                arr[i][startColumn] = variable;
            }
            counter = 4;
        }
        else if (counter == 4)
        {
            startRow++;
            startColumn++;
            endRow--;
            endColumn--;
            counter = 0;
            variable = (variable == 'X') ? '0' : 'X';
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}