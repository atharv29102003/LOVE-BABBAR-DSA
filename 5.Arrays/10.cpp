// linear search algorithm
#include <bits/stdc++.h>
using namespace std;
int find(int arr[], int size, int key)
{
    // linear search
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    // if not found
    return false;
}
int main()
{
    int arr[5] = {2, 4, 5, 6, 7};
    int size = 5;
    int key;
    cin >> key;
    if (find(arr, size, key))
    {
        cout << "key found" << endl;
    }
    else
    {
        cout << "Key not found" << endl;
    }
}