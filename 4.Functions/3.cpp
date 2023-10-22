// find the sum of 2 natural numbers
// for solving this problem we are using function's pass by value jisme ham main function ke variable ki copy ek subordinate function ke liye banate hai
// pass by value mane copy karna
#include <bits/stdc++.h>
using namespace std;
void sum(int a, int b)
{
    cout << a + b << endl;
}
int main()
{
    int a, b;
    cin >> a >> b;
    sum(a, b);
    return 0;
}