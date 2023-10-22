// find the max of 2 numbers
#include <bits/stdc++.h>
using namespace std;
int max(int a, int b)
{
    if (a > b)
    {
        cout << a << endl;
    }
    {
        return b;
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << max(a, b);
    return 0;
}