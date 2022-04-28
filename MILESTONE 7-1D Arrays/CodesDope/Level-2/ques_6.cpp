// Pass a 2D array to function and access all its elements.

#include <iostream>
using namespace std;

const int row = 3, column = 3;

int access(int arr[row][column])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

int main()
{
    int arr[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr[i][j];
        }
    }
    access(arr);
    return 0;
}
