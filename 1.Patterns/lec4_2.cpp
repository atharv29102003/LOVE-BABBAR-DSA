// even number
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;
    cout << "All the values of even numbers is " << endl;
    for (int i = 0; i <= n; i += 2)
    {
        cout << i << endl;
    }
    return 0;
}