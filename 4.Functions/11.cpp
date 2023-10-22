// homework 3-Find the factorial of a number
#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n;
    cin >> n;
    int output = factorial(n);
    cout << output << endl;
}