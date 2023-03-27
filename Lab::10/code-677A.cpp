/*
codeforce problem::677A
problem name::Vanya and Fence
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,b,c=0,d=0;
    cin>>n>>b;
    int a;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(b<a)
        {
            c=c+2;
        }
        if(b>=a)
            d=d+1;
    }
    cout<<c+d;
}
