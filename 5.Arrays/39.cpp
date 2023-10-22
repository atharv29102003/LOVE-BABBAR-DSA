// find missing elements from an array consisting of duplicates
#include <bits/stdc++.h>
using namespace std;
int findmissing(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int index = abs(a[i]);
        if (a[index - 1] > 0)
        {
            a[index - 1] *= -1;
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    // all positive indexes are missing
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            cout << i + 1;
        }
        cout << " ";
    }
}

int main()
{
    // using indexing method meaning ki index ki last value bole to n-1 tak hi values hogi array ke andar aur ham un values ko index ki tarah treat kar sakte hai
    int n;
    int a[] = {1, 3, 3, 3, 4};
    n = sizeof(a) / sizeof(int);
    findmissing(a, n);
    return 0;
}