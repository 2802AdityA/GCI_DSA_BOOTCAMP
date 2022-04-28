// Take an array of 10 elements. Split it into middle and store the elements in two dfferent arrays.

#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    int firstArr[5];
    int secondArr[5];
    for (int i = 0; i < 5; i++)
    {
        firstArr[i] = arr[i];
        secondArr[i] = arr[5 + i];
    }
    cout << "After Splitting: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << firstArr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << secondArr[i] << " ";
    }
    cout << endl;

    return 0;
}