#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3];
    int rows = 3, col = 3;
    // input
    // col wise input
    for (int i = 0; i < rows; i++)
    {
        // for every row, we need to print value in each column
        for (int j = 0; j < col; j++)
        {
            cin >> arr[j][i];
        }
    }
    cout << "Printing column wise" << endl;
    for (int i = 0; i < rows; i++)
    {
        // humne input column wise input liya hai to printing row wise karna padega
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}