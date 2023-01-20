/*  Lab test:::01
Problem Name:::Reverse String in C++
*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i;
    cout<<"Printing string in reverse\n";
    for(i = s.length() - 1; i >= 0; i--)
    {
      	cout<<s[i];
    }
    getch();
    return 0;
}
