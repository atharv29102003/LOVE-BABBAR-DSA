// solid diamond=full pyramid+inverted full pyramid
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // full pyramid
    for (int row = 0; row < n; row++)
    {
        // spaces
        for (int col = 0; col < n - row - 1; col++) // col<n-(row+1)
        {
            cout << " ";
        }
        // stars
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // inverted full pyramid
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}