// numeric full pyramid
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {

        // spaces
        for (int col = 0; col < n - row - 1; col++) // isme hamne number of spaces ko row number se relate kiya hai aur relation nikala n-[row+1] which is equivalent to n-row-1
        {
            cout << " ";
        }
        // numbers
        int st = row + 1;
        for (int col = 0; col < row + 1; col++) // isme hamne relation nikala ki jo number of elements hai aur jo element ki value hai vo row+1 hai.
        {
            // cout << row + col + 1; this is another relation to print the number pyramid aur is relation se hame pata chalta hai ki agar row 0 hai col 0 hai to 1st element 1 hai similarly the required value badh jayegi hollow inverted numeric half pyramid mein
            cout << st;
            st++;
        }
        // reverse counting
        int start = 2 * row;                // start ki value 2 * row hai kyuki jo element se reverse counting chalu ho rahi hai vo two times hai to the number of row.
        for (int col = 0; col < row; col++) // idhar hamne col<row likha kyuki row number ke equivalent hi ham elements print kar rahe hai.
        {

            cout << start;
            start--;
        }

        cout << endl;
    }
}