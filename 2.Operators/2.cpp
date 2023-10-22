// left shift operator
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 12;
    int b = 13;
    a = a << 2;  // hamne isse 2 baar left shift kiya to 12, 4 se multiply ho gaya
    b = b << -1; // jab ham negative number through left shift karte hai tab hame garbage value milti hai
    cout << a << endl;
    cout << b << endl;
    a = a >> 3;
    b = b >> -1;
    cout << a << endl;
    cout << b << endl;
}