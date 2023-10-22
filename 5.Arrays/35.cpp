// transpose a matrix
#include <iostream>
using namespace std;
void transpose(int arr[][3], int r, int c, int transposearr[][3])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            // swap(arr[i][j], arr[j][i]);
            transposearr[j][i] = arr[i][j];
        }
    }
}
void printarray(int arr[][3], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
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
    cout << "Printing original array" << endl;
    printarray(arr, rows, cols);
    cout << "Transpose of an matrix " << endl;
    int transposearr[3][3];
    transpose(arr, rows, cols, transposearr);
    cout << "Printing transpose of an matrix " << endl;
    printarray(transposearr, rows, cols); // yaha par transpose wala array pass karna hai

    return 0;
}