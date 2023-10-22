#include <bits/stdc++.h>
using namespace std;
// kisi array ko agar ham kisi function mein pass kar rahe hai to ham pass by reference use kar rahe hai yane hamne array ka address pass kiya hai copy nahi jo ki ham pass by value mein kar rahe thae.
// pass by reference mein ham actual array mein changes kar rahe hai.
// agar hamne function mein array pass kiya hai to hame uska size bhi pass karna jaruri hai
void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int inc(int arr[], int size)
{
    arr[0] = arr[0] + 10;
    printarray(arr, size);
}
int main()
{
    int arr[] = {5, 6};
    int size = 2;
    inc(arr, size);
    printarray(arr, size);
}