// left shift operator
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 12;
    int b = 13;
    a = a >> 1;
    b = b >> -1;
    cout << a << endl; // a ko 1 baar right shift karne se hame uski value half hoke mile gi simimlarly agar 2 baar kiya to 1/4 hoke milegi
    cout << b << endl;
}