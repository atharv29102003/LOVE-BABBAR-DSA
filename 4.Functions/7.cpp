#include <bits/stdc++.h>
using namespace std;
char grades(int marks)
{
    switch (marks / 10)
    {
    case 10:
        return 'A';
        break;
    case 9:
        return 'A';
        break;
    case 8:
        return 'B';
        break;
    case 7:
        return 'C';
        break;
    case 6:
        return 'D';
        break;
    default:
        return 'F';
        break;
    }
}
int main()
{
    int marks;
    cin >> marks;
    char finalgrade = grades(marks);
    cout << finalgrade << endl;
    return 0;
}