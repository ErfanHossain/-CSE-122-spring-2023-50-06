/*
codeforce problem::59A
problem name:Word
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int p, m=0, k=0, i;
    string s;
    cin>>s;
    p=s.size();
    for(i=0; i<p; i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            m++;
        }
         if(s[i]>='A' && s[i]<='Z')
        {
            k++;
        }

    }
    if(m>=k)
    {
      for(i=0; i<p; i++)
    {
        s[i]=tolower(s[i]);
    }
    }
    else
    {
      for(i=0; i<p; i++)
    {
        s[i]=toupper(s[i]);
    }
    }
    cout<<s;
    return 0;
}
