// find extremes for odd number of elements in an array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 5, 6, 9, 7};
    int size = 7;
    int start = 0;
    int end = size - 1;
    while (true)
    {
        if (start > end)
        {
            break;
        }
        if (start == end) // for odd number of values in an array
        {
            cout << arr[start] << " ";
        }
        else
        {
            cout << arr[start] << " ";
            cout << arr[end] << " ";
        }

        start++;
        end--;
    }
    return 0;
}