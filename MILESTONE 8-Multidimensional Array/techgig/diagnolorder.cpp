#include <iostream>
using namespace std;

int main()
{

    int rows, columns;
    cin >> rows >> columns;

    int arr[rows][columns];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> arr[i][j];
        }
    }
    int rowCounter = 0;
    int counter = rows + columns - 1;
    while (counter--)
    {
        for (int i = rowCounter; i >= 0; i--)
        {
            if (i < rows && (rowCounter - i) < columns)
            {
                cout << arr[i][rowCounter - i] << " ";
            }
        }
        cout << endl;
        rowCounter++;
    }

    return 0;
}