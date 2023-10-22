// decimal to binary conversion
#include <bits/stdc++.h>
using namespace std;
int decimaltobinarymethod1(int n)
{
    // division method
    int binaryno = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 2;
        binaryno = bit * pow(10, i++) + binaryno; // ans= digit input multiplied by 10 raised to the power i +ans(here ans is binary no)
        // cout << bit << endl;
        n = n / 2;
    }
    return binaryno;
}
int main()
{
    int n;
    cin >> n;
    int binary = decimaltobinarymethod1(n);
    cout << binary << endl;
}