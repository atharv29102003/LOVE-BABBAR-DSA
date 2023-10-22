// check whether the number is prime or not
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
    bool isprime = Checkprime(n);
    if (isprime)
    {
        cout << "Prime";
    }
    else
    {
        cout << "Not a prime" << endl;
    }
    return 0;
}
