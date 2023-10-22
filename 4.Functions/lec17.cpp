#include <bits/stdc++.h>
using namespace std;
int main()
{
    int celsius;
    cin >> celsius;
    double k = celsius + 273.15;
    double f = celsius * 1.80 + 32.00;
    vector<double> v;
    v.push_back(k);
    v.push_back(f);
    return 0;
}