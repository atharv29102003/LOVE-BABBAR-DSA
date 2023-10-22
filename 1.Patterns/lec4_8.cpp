// rectangle having 3 rows and 5 columns.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    /* for (int row = 0; row < 3; row++)
     {
         for (int col = 0; col < 5; col++)
         {
            cout << " * ";
         }
         cout << endl;
     }*/
    // alternate code using collums as main
    int n;
    cin >> n;
    int m;
    cin >> m;
    for (int col = 0; col < m; col++)
    {
        for (int row = 0; row < n; row++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}