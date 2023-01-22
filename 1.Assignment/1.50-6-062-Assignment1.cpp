/*
1. Write a C++ program to find out first n perfect number where n is the input from user.
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int i, n, div, sum=0;
    cin >> n;
    for (i=1; i<n; i++)
    {
        div = n % i;
        if (div == 0)
            sum = sum + i;
    }
    if (sum == n)
        cout << endl << n <<" is a perfect number.";
    else
        cout << endl << n <<" is not a perfect number.";
        getch();
    return 0;
}
