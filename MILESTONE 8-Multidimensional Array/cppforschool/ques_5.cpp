#include <iostream>
using namespace std;

void middleRow(int arr[][1000], int rows, int columns)
{
    cout << "Middle Row" << endl;
    for (int i = 0; i < columns; i++)
    {
        cout << arr[rows / 2][i] << " ";
    }
    cout << endl;
}

void middleColumn(int arr[][1000], int rows, int columns)
{
    cout << "Middle Column" << endl;
    for (int i = 0; i < rows; i++)
    {
        cout << arr[i][columns / 2] << " ";
    }
    cout << endl;
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
    middleRow(arr, rows, columns);
    middleColumn(arr, rows, columns);
    return 0;
}