// binary to decimal conversion
/*  Steps:
    1.Multiply each digit with its place value
    2.Add up all place values
    3.Sum is the decimal number
*/
#include <bits/stdc++.h>
using namespace std;
int binarytodecimal(int n)
{
    int decimal = 0;
    int i = 0;
    while (n)
    {
        int bit = n % 10;
        decimal = decimal + bit * pow(2, i++);
        n /= 10;
    }
    return decimal;
}
int main()
{
    int binaryno;
    cin >> binaryno;
    cout << binarytodecimal(binaryno) << endl;
}