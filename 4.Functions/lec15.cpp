// Reverse Integer Leetcode
#include <bits/stdc++.h>
using namespace std;
int solution(int x)
{
    int ans = 0, rem = 0;
    bool isneg = false; // negative number ki case ke liye
    if (x < 0)
    {
        isneg = true;
        x = -x;
    }
    while (x > 0)
    {
        int digit = x % 10;
        ans = ans * 10 + digit;
        x = x / 10;
    }
    return isneg ? -ans : ans;
}