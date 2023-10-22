// print find extermes in an array for even number of elements
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 5, 6, 9, 7, 8};
    int size = 8;
    int start = 0;
    int end = size - 1;
    while (true)
    {
        if (start > end)
        {
            break;
        }
        cout << arr[start] << " ";
        cout << arr[end] << " ";

        start++;
        end--;
    }
    return 0;
}