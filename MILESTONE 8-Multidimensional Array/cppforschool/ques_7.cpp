#include <iostream>
using namespace std;

void input(int arr[][500], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void multiplication(int first[][500], int second[][500], int third[][500], int firstR, int firstC, int secondC)
{
    for (int i = 0; i < firstR; i++)
        for (int j = 0; j < secondC; j++)
        {
            for (int k = 0; k < firstC; k++)
                third[i][j] += first[i][k] * second[k][j];
        }
}

int main()
{
    int firstRows, firstColumns;
    cin >> firstRows >> firstColumns;

    int secondRows, secondColumns;
    cin >> secondRows >> secondColumns;

    int firstArray[500][500],
        secondArray[500][500],
        thirdArray[500][500];

    input(firstArray, firstRows, firstColumns);
    input(secondArray, secondRows, secondColumns);
    multiplication(firstArray, secondArray, thirdArray, firstRows, firstColumns, secondColumns);
    for (int i = 0; i < firstRows; i++)
    {
        for (int j = 0; j < secondColumns; j++)
        {
            cout << thirdArray[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}