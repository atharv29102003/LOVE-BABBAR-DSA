#include <bits/stdc++.h>
using namespace std;
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
    return 0;
}