#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;
    cout << "All the values of i are " << endl;
    for (int i = 1; i <= n; i *= 2)
    {
        cout << i << endl;
    }
    return 0;
}