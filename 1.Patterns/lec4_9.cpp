// square pattern
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int col = 0; col < n; col++)
    {
        for (int col = 0; col < n; col++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}