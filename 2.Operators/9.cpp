// Variable Scoping
#include <bits/stdc++.h>
using namespace std;
int raja = 420; // ye ek global variable hai jo main function ki scope mein nahi hai aur ye kahi par bhi code mein use kiya ja sakta hai
int main()
{
    // declaration
    int a;
    // initialization
    int b = 5;
    // updation
    b = 13;
    if (true)
    {
        int b = 15;
        cout << b << endl;
        cout << raja << endl;
    }
    cout << b << endl;
    cout << raja << endl;
}
// we should avoid practise of using global variable while writing code