// Homework -1
// Write a function to display area of circle
#include <bits/stdc++.h>
using namespace std;
float areaofcircle(float r)
{
    return (2) * (3.14) * (r);
}
int main()
{
    float r;
    cin >> r;
    float area = areaofcircle(r);
    cout << area << endl;
    return 0;
}