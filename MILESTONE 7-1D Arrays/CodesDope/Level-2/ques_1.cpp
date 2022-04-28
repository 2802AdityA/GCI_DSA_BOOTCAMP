// Take an array of length n where all the numbers are nonnegative and unique. Find the element in the array possessing the highest value. Split the element into two parts where first part contains the next highest value in the array and second part hold the required additive entity to get the highest value. Print the array where the highest value get splitted into those two parts. Sample input : 4 8 6 3 2 Sample output : 4 6 2 6 3 2

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int max = INT32_MIN, second = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        max = arr[i] >= max ? arr[i] : max;
        second = arr[i] < max && arr[i] > second ? arr[i] : second;
    }
    int list[n + 1];
    for (int i = 0, j = 0; i < n + 1, j < n; ++i, ++j)
    {
        if (arr[j] == max)
        {
            list[i] = second;
            list[i + 1] = (max - second);
            i++;
        }
        else
        {
            list[i] = arr[j];
        }
    }
    for (int i = 0; i < n + 1; i++)
    {
        cout << list[i] << endl;
    }

    return 0;
}