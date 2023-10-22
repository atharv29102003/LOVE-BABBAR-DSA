// continue statement
#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        if (i == 2) // yaha par hamne 2nd iteration ko skip karva diya
        {
            continue; // continue ki vajaha se loop ki condition to check ho rahi hai par vo next line ko execute nahi hone de rahi hai}
        }
        cout << i << endl;
    }
}
// ham continue ki madat se ek specific iteration ko miss kara sakte hai