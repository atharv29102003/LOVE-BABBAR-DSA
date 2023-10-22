#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> b(n, -101); // initialising all values of vector b with -101
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    cout << "size of b is " << b.size() << endl;
    cout << "Capacity of b is " << b.capacity() << endl;
    vector<int> c{10, 20, 3, 0, 50};
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}