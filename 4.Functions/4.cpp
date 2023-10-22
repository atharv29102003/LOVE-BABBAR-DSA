// find max of 3 numbers
#include <bits/stdc++.h>
using namespace std;
int maxnum(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int max = maxnum(a, b, c);
    cout << max << endl;
    return 0;
}