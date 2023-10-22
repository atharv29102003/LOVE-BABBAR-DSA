// find max an min in an 2-d array
#include <bits/stdc++.h>
using namespace std;
int getmax(int arr[][3], int rows, int cols)
{
    int maxi = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > maxi)
            {
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}
int getmin(int arr[][3], int rows, int cols)
{
    int mini = INT_MAX;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] < mini)
            {
                mini = arr[i][j];
            }
        }
    }
    return mini;
}
int main()
{
    int arr[3][3];
    int rows = 3, cols = 3;
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
    cout << "Maximum number is " << getmax(arr, rows, cols) << endl;
    cout << "Minimum number is " << getmin(arr, rows, cols) << endl;
    return 0;
}