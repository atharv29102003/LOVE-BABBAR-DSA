// sum of all even numbers
#include <bits/stdc++.h>
using namespace std;
int evensum(int num)
{
    int sum = 0;
    for (int i = 2; i <= num; i += 2)
    {
        sum = sum + i;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    cout << "Sum of all even numbers is" << endl;
    int even = evensum(n);
    cout << even << endl;
    return 0;
}