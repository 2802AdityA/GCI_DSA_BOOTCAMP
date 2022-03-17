#include <iostream>
using namespace std;

int main()
{

    int n, last;
    cin >> n;
    int freq[10] = {0};
    while (n > 0)
    {
        last = n % 10;
        n /= 10;
        freq[last]++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (freq[i] != 0)
        {
            cout << "Frequency of " << i << " is: " << freq[i] << endl;
        }
    }
    return 0;
}