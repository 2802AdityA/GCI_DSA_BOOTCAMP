#include <iostream>
using namespace std;

void rowMultiplicaiton(int arr[][6], int rows, int columns)
{

    for (int i = 0; i < rows; i++)
    {
        int multiplication = 1;
        for (int j = 0; j < columns; j++)
        {
            multiplication *= arr[i][j];
        }
        cout << "Row " << i << ": " << multiplication << endl;
    }
}

int main()
{
    int arr[4][6];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }
    }
    rowMultiplicaiton(arr, 4, 6);
    return 0;
}