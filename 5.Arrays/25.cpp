// pair sum
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr{10, 20, 30, 40, 50, 70};
    int sum = 80;
    // print all pairs
    // outer loop will traverse for each element
    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        // for every element ,will traverse for aage wala element
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (element + arr[j] == sum)
            {
                cout << "Pair found "
                     << "(" << element << "," << arr[j] << ")" << endl;
            }
        }
    }
    return 0;
}