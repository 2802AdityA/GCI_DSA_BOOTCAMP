#include <iostream>
using namespace std;

void input(int a[][1000], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> a[i][j];
        }
    }
}

void display(int a[][1000], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int sum(int a[][1000], int rows, int columns)
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            sum += a[i][j];
        }
    }
    return sum;
}

void rowSum(int a[][1000], int rows, int columns)
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            sum += a[i][j];
        }
        cout << "sum of element in row " << i << " = " << sum << endl;
    }
}

void columnSum(int a[][1000], int rows, int columns)
{
    int sum = 0;
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            sum += a[i][j];
        }
        cout << "sum of element in column " << i << " = " << sum << endl;
    }
}

void transpose(int arr[][1000], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int rows, columns, arr[1000][1000], choice;

    cin >> rows;

    cin >> columns;

    cout << "Choose from options below:" << endl;

    cout << "1. Input the elements \n2. Display the elements \n3. Sum of all elements of matrix\n4. Display row-wise sum of matrix \n5. Display column-wise sum of matrix\n6. Create transpose of matrix" << endl;

    cin >> choice;

    switch (choice)
    {

    case 1:
        input(arr, rows, columns);
        break;
    case 2:
        input(arr, rows, columns);
        display(arr, rows, columns);
        break;
    case 3:
        input(arr, rows, columns);
        cout << "Sum is " << sum(arr, rows, columns) << endl;
        break;
    case 4:
        input(arr, rows, columns);
        rowSum(arr, rows, columns);
        break;
    case 5:
        input(arr, rows, columns);
        columnSum(arr, rows, columns);
        break;
    case 6:
        input(arr, rows, columns);
        transpose(arr, rows, columns);
        break;
    default:
        cout << "Invalid choice" << endl;
    }

    return 0;
}