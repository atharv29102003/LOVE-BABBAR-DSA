// Count 0's and 1's in an array.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1};
    int size = 15;
    int numzero = 0;
    int numone = 0;
    for (int i = 0; i < size; i++)
    {
        // if 0 found numzero++
        if (arr[i] == 0)
        {
            numzero++;
        }
        // if 1 found numone++
        if (arr[i] == 1)
        {
            numone++;
        }
    }
    cout << numzero << endl;
    cout << numone << endl;
    return 0;
}