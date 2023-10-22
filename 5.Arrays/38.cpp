// move all negative numbers to the left side of an array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // using dutch national flag algo or 2 pointer approach
    vector<int> arr{1, 2, -3, 4, -5, 6};
    int l = 0;
    int h = arr.size() - 1;
    while (l < h)
    {
        if (arr[l] < 0) // low pe negative number pada hai
        {
            l++;
        }
        else if (arr[h] > 0) // high pe positive number pada hai
        {
            h--;
        }
        else
        {
            swap(arr[l], arr[h]);
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}