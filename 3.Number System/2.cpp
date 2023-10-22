// decimal to binary using bitwise and
/* STEPS:
    1.Obtain bit with bitwise AND operation i.e.;(N&1)
    2.Right shift N by 1.(N=N>>1)
    3.Repeat above steps till N>0.
    4.Reverse the bits so obtained
 */
#include <bits/stdc++.h>
using namespace std;
int decimaltobinarymethod2(int n)
{
    // bitwise method
    int binaryno = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = (n & 1);
        binaryno = bit * pow(10, i++) + binaryno; // ans= digit input multiplied by 10 raised to the power i +ans(here ans is binary no)
        // cout << bit << endl;
        n = n >> 1;
    }
    return binaryno;
}
int main()
{
    int n;
    cin >> n;
    int binary = decimaltobinarymethod2(n);
    cout << binary << endl;
}