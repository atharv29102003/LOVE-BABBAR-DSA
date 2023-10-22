// maximum number in an array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1, 3, 51, 69, 115, 15};
    int size = 6;
    // initialize the maximum number with the least minimum value
    int maxnum = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (a[i] > maxnum)
        {
            // found a number greater than maxnum the replace maxi with a[i]
            maxnum = a[i];
        }
    }
    cout << maxnum << endl;
    return 0;
}