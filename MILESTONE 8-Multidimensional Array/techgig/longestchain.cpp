#include <iostream>
using namespace std;

int main()
{

    int rows, columns;
    cin >> rows >> columns;

    int arr[rows][columns];
    int freq[1000] = {0};
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> arr[i][j];
            freq[arr[i][j]]++;
        }
    }
    int count = 0, max = INT32_MIN;
    for (int i = 0; i < 1000; i++)
    {
        if (freq[i] > 0)
        {
            count++;
        }
        else if (freq[i] == 0)
        {
            max = max > count ? max : count;
        }
    }
    cout << max << endl;
    return 0;
}