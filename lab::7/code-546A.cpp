/*
codeforce problem:: 546A
problem neme::Soldier and Bananas
*/
#include<iostream>
using namespace std;
int main()
{
    int k,n,w,i,sum=0,a=0;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++)
    {
        a+=i*k;
    }
    sum=a-n;
    if(sum<0)
    {
        sum=0;
    }
    else
        {
            sum=sum;
        }
    cout<<sum<<endl;
    return 0;
}
