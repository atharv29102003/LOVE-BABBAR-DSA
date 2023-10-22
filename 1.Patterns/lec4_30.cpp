// Numeric Hollow Pyramid
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }
        // full pyramid mein hollow spaces aur numbers ko milake hame odd number values milti hai isilie vo odd number ka pattern hai uska formula hai 2*row+1
        int start = 1;
        for (int col = 0; col < 2 * row + 1; col++)
        {
            if (row == 0 || row == n - 1)
            {
                if (col % 2 == 0)
                {
                    // even jagaha par number print karo
                    cout << start;
                    start += 1;
                }
                else
                {
                    // odd jagaha par space print karo
                    cout << " ";
                }
            }
            else
            {
                // first column hai to
                if (col == 0)
                {
                    cout << 1;
                }
                else if (col == 2 * row)
                {
                    cout << row + 1;
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}