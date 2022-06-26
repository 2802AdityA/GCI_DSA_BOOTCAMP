#include <iostream>
using namespace std;

int main()
{
    int rows, columns;
    cin >> rows >> columns;
    int arr[rows][columns];
    int updated[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                for (int k = 0; k < rows; k++)
                {
                    updated[k][j] = 1;
                }
                for (int l = 0; l < columns; l++)
                {
                    updated[i][l] = 1;
                }
            }
            else
            {
                if (updated[i][j] != 1)
                {
                    updated[i][j] = 0;
                }
            }
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << updated[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}