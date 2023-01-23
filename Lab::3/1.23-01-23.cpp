#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,j,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
       cin>>a[i];
    }
    for(j=0;j<n;j++)
        for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
