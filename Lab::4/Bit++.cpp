/*Problem Namae:: Bit++
Problem Number:::282A
*/
#include<iostream>
using namespace std;
int main()
{
    int a,i,x=0;
    cin>>a;
    string s;
    for(i=0;i<a;i++)
    {
        cin>>s;
        if(s[1]=='+')
            x++;
        else
            x--;
    }cout<<x<<endl;


    return 0;
}
