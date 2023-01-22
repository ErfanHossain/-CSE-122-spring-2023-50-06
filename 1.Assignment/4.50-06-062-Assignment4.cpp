/*
4. Write a function which receives a float and an int from main(), finds the product of
these two and returns the product which is printed through main() in C++.
*/
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
double f(float i,int j)
{
    float n;
    n=i*j;
    return(n);
}

int  main()
{
    float a,p;
    int b;
    cout<<"Enter Float Number";
    cin>>a;
    cin>>b;
    p = f(a,b);
    cout<<fixed<<setprecision(2);
    cout<<p;
    return 0;
}
