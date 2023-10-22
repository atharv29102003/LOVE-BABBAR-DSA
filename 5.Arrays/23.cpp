// intersection of two arrays
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr{1, 2, 3, 3, 4, 6, 8};
    vector<int> brr{3, 4, 6, 9};
    vector<int> ans;
    // outer loop on arr vector
    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        // for every element ,run loop for brr
        for (int j = 0; j < brr.size(); j++)
        {
            if (element == brr[j])
            {
                brr[j] = -1; // taki repeated numbers baar baar print na ho
                // isiliye hamne brr[j] ko -1 se mark kar liya
                ans.push_back(element);
            }
        }
    }
    // print ans
    for (auto value : ans)
    {
        cout << value << " ";
    }
    return 0;
}