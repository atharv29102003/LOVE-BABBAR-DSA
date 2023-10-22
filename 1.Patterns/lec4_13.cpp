// inverted half pyramid
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; // no of rows
    cin >> n;
    for (int row = 0; row < n; row += 1)
    {
        for (int col = 0; col < n - row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}