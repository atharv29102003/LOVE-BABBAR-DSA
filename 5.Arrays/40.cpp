// find missing elements from an array consisting of duplicates
#include <bits/stdc++.h>
using namespace std;
int findmissing(int a[], int n)
{
    int i = 0;
    while (i < n)
    {
        int index = a[i] - 1;
        if (a[i] != a[index])
        {
            swap(a[i], a[index]);
        }
        else
        {
            i++;
        }
    }
    //     for (int i = 0; i < n; i++)
    //     {
    //         cout << a[i] << " ";
    //     }
    //     cout << endl;
    //
    for (int i = 0; i < n; i++)
    {
        if (a[i] != i + 1)
        {
            cout << i + 1 << " ";
        }
    }
    cout << endl;
}

int main()
{
    // sorting and swapping method : isme ham har element ko uski position pohocha rahe hao aur check kar rahe hai aur agar koi value nahi hai to usko return kar de rahe hai
    int n;
    int a[] = {1, 3, 3, 5, 4};
    n = sizeof(a) / sizeof(int);
    findmissing(a, n);
    return 0;
}