// print all prime number from 1 to n
#include <bits/stdc++.h>
using namespace std;
bool Checkprime(int n)
{
    int i = 2;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        bool isIprime = Checkprime(i);
        if (isIprime)
        {
            cout << i << " ";
        }
    }
    return 0;
}
