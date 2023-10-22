// minimum number in an array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {-1, 2, -14, 21, -25, 53, 14};
    int size = 7;
    int minnum = INT_MAX; // minimum number is initialized by maximum value in int
    for (int i = 0; i < size; i++)
    {
        if (a[i] < minnum)
        {
            // found a number smaller than minnum the replace minnum with a[i]
            minnum = a[i];
        }
    }
    cout << minnum << endl;
    return 0;
}