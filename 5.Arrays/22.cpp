// union of two arrays
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {2, 3, 4, 5, 9};
    int sizea = 5;
    int brr[] = {1, 6, 7, 8};
    int sizeb = 4;
    vector<int> ans;
    for (int i = 0; i < sizea; i++)
    {
        ans.push_back(arr[i]);
    }
    for (int i = 0; i < sizeb; i++)
    {
        ans.push_back(brr[i]);
    }
    // sort(ans.begin(), ans.end());
    // if sorted array as an answer is required then use above sort function
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}