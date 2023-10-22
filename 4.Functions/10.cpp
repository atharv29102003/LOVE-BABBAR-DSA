// home work-2:Find the number is even or odd
#include <bits/stdc++.h>
using namespace std;
bool evenodd(int n)
{
    if (n % 2 == 0)
    {
        cout << "Number is even" << endl;
    }
    else if (n % 2 == 1)
    {
        cout << "Number is odd" << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    bool check = evenodd(n);
    return 0;
}