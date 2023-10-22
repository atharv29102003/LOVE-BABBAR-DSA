// 2-d arrays
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // declaration
    int arr[3][3];
    // initialization
    int brr[3][3] = {
        {1, 2, 3},
        {7, 5, 9},
        {2, 5, 4}};
    // row wise printing
    for (int i = 0; i < 3; i++)
    {
        // for every row, we need to print value in each column
        for (int j = 0; j < 3; j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
    // column wise printing
    cout << "Printing column wise" << endl;
    for (int i = 0; i < 3; i++)
    {
        // for every column, we need to print value in each =row
        for (int j = 0; j < 3; j++)
        {
            cout << brr[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}