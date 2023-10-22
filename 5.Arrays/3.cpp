#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    cout << arr[0] << " " << endl; // by using the index we can access an array
    for (int i = 0; i < 5; i++)
    {
        cout << arr + (i * 4) << endl;
    }
    return 0;
}