// ek aisa program jo well defined task se linked hota hai use ham function kehte hai.
// print your name several times using a function.
#include <bits/stdc++.h>
using namespace std;
void printname() // here void is our return type,printname is the name of the function and in that round braces we can give in the input parameters .
{
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Atharv Deshpande" << endl;
    }
}
int main()
{
    // function call
    printname();
    return 0;
}
