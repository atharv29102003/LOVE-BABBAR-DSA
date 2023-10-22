// row sum ko print karo
#include <bits/stdc++.h>
using namespace std;
void printrowsum(int arr[][3], int rows, int col)
{
    // row wise traversal
    cout << "Printing row wise sum" << endl;
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
    }
}
int main()
{
    int arr[4][3];
    int rows = 4, col = 3;
    // input
    // row wise input
    for (int i = 0; i < rows; i++)
    {
        // for every row, we need to print value in each column
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Printing row wise" << endl;
    for (int i = 0; i < rows; i++)
    {
        // for every row, we need to print value in each column
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    printrowsum(arr, rows, col);
    return 0;
}