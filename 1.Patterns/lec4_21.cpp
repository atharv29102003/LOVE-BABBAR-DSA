// full pyramid
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
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
}