// hollow full pyramid
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // agar row n hai to number of column 2n-1 hai for example 6 rows hai to column 11 hoge
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k = 0;
        for (int j = 0; j < ((2 * n) - 1); j += 1)
        {
            if (j < n - i - 1)
            {
                cout << " ";
            }
            else if (k < 2 * i + 1)
            {
                if (k == 0 || k == 2 * i || i == n - 1) // i==n-1 represents last row full of astric
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
                k++;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}