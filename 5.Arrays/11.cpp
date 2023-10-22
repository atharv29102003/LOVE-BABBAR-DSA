// linear search without using function
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8;
    int key;
    cin >> key;
    bool flag = 0;
    // if flag==0 then not found
    // else not found
    for (int i = 0; i < size; i++) // linerar search
    {
        if (a[i] == key)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
    return 0;
}