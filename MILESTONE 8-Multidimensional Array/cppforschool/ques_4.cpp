#include <iostream>
using namespace std;

void upperHalf(int arr[][1000], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (j < i)
            {
                cout << "  ";
            }
            else
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
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
    upperHalf(arr, rows, columns);
    return 0;
}