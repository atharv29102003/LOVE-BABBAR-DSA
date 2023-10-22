// hollow rectangle generic code
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rowcount, colcount;
    cin >> rowcount >> colcount;
    for (int row = 0; row < rowcount; row += 1)
    {

        if (row == 0 || row == rowcount - 1) // rowcount-1 shows the last row
        {
            for (int col = 0; col < colcount; col++)
            {
                cout << " * ";
            }
        }
        else
        {
            cout << " * ";
            for (int i = 0; i < colcount - 2; i += 1) // colcount-2 shows the the number of column which shows spaces
            {
                cout << "   ";
            }
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}