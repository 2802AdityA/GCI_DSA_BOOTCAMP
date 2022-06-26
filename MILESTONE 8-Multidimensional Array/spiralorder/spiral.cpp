#include <iostream>
using namespace std;

void spiral(int arr[][1000], int rows, int columns)
{
    int start = 0;

    int startRow = 0, endRow = columns - 1, startColumn = 0, endColumn = rows - 1;
    while (startColumn <= endColumn && startRow <= endRow)
    {
        if (start == 0)
        {
            for (int i = startColumn; i <= endColumn; i++)
            {
                cout << arr[startRow][i] << " ";
            }
            startRow++;
            start = 1;
        }
        else if (start == 1)
        {
            for (int i = startRow; i <= endRow; i++)
            {
                cout << arr[i][endColumn] << " ";
            }
            endColumn--;
            start = 2;
        }
        else if (start == 2)
        {
            for (int i = endColumn; i >= startColumn; i--)
            {
                cout << arr[endRow][i] << " ";
            }
            endRow--;
            start = 3;
        }
        else if (start == 3)
        {
            for (int i = endRow; i >= startRow; i--)
            {
                cout << arr[i][startColumn] << " ";
            }
            startColumn++;
            start = 0;
        }
    }
}

int main()
{
    int rows, columns;
    cin >> rows >> columns;
    int arr[1000][1000];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> arr[i][j];
        }
    }
    spiral(arr, rows, columns);
    return 0;
}