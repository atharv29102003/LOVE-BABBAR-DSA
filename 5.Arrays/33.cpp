// linear search in 2-d array
#include <bits/stdc++.h>
using namespace std;
bool findkey(int arr[][3], int rows, int cols, int key)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[4][3];
    int rows = 4, cols = 3;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Printing row wise" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int key = 1; // key change kar kar ke check kar rahe hai ki key present hai ki nahi
    if (findkey(arr, 3, 3, key))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}