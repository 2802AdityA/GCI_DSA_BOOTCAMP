#include <iostream>
using namespace std;

void arraySum(int Aarr[][1000], int Barr[][1000], int rows, int columns)
{
    int Carr[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            Carr[i][j] = Aarr[i][j] + Barr[i][j];
            cout << Carr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int rows, columns;
    cin >> rows >> columns;
    int Aarr[1000][1000];
    int Barr[1000][1000];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> Aarr[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> Barr[i][j];
        }
    }

    arraySum(Aarr, Barr, rows, columns);
    return 0;
}