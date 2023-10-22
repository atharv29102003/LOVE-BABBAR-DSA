// find unique element
#include <bits/stdc++.h>
using namespace std;
int findunique(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i]; // agar 2 similar values ko xor kiya to value 0 ho jati hai
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n); // n size ka vector create kar liya
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    int uniqueelement = findunique(arr);
    cout << uniqueelement << " " << endl;
}