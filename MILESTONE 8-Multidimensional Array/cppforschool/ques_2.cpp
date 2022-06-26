#include <iostream>
using namespace std;

void rightDiagnol(int arr[][1000], int rows, int columns)
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        sum += arr[i][rows - 1 - i];
    }
    cout << "Right diagnol: " << sum << endl;
}

void leftDiagnol(int arr[][1000], int rows, int columns)
{
    int sum = 0;
    for (int i = rows - 1; i >= 0; i--)
    {
        sum += arr[i][i];
    }
    cout << "Left diagnol: " << sum << endl;
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

    rightDiagnol(arr, rows, columns);
    leftDiagnol(arr, rows, columns);

    return 0;
}