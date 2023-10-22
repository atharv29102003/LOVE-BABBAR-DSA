#include <bits/stdc++.h>
using namespace std;
int main()
{
    // create vector
    vector<int> arr;
    // int ans = (sizeof(arr) / sizeof(int));
    // cout << ans << endl;
    cout << arr.size() << endl;
    cout << arr.capacity() << endl;
    // insert elements in an vector
    arr.push_back(5);
    arr.push_back(6);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << arr.size() << endl;
    // remove elements in an vector
    arr.pop_back();
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << arr.size() << endl;
    return 0;
}