// grade marks question
#include <bits/stdc++.h>
using namespace std;
char grades(int marks)
{
    if (marks > 90)
    {
        return 'A';
    }
    else if (marks <= 90 && marks >= 80)
    {
        return 'B';
    }
    else if (marks <= 80 && marks >= 70)
    {
        return 'C';
    }
    else if (marks <= 70 && marks >= 60)
    {
        return 'D';
    }
    else if (marks <= 60 && marks >= 50)
    {
        return 'E';
    }
    else
    {
        return 'F';
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