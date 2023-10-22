// flipped solid diamond
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        // inverted half pyramid
        for (int col = 0; col < n - row; col++)
        {
            cout << "*";
        }
        // space wala full pyramid
        for (int col = 0; col < 2 * row + 1; col++)
        {
            cout << " ";
        }
        // inverted half pyramid
        for (int col = 0; col < n - row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // half pyramid
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }
        // inverted full pyramid
        for (int col = 0; col < 2 * n - 2 * row - 1; col++)
        {
            cout << " ";
        }
        // half pyramid
        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}