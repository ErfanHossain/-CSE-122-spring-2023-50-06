/*
5.BUBT grading policy is :

(i) 80 % marks or above is A+
(ii) 75% to 79% marks is A
(iii) 70% to 74% marks is A-
(iv) 65% to 69% marks is B+
(v) 60% to 64% marks is B
(vi) 55% to 59% marks is B-
(vii) 50% to 54% marks is C+
(viii) 45% to 49% marks is C
(ix) 40% to 44% marks is D
(x) Below 40% is F
*/
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    int n,e;
    float sum;
    cout<<"total number"<<endl;
    cin>>n;
    cout<<" earned Number"<<endl;
    cin>>e;
    cout<<fixed<<setprecision(2);
    sum=(((float)e*100)/n);
    cout<<" Percentage"<<sum<<"%"<<endl;
    if(sum>=80)
        cout<<"A+"<<endl;
    else if(sum>=75 && sum<80)
        cout<<"A"<<endl;
    else if (sum>=70 && sum<75)
        cout<<"A-"<<endl;
    else if(sum>=65 && sum<70)
        cout<<"B+"<<endl;
    else if(sum>=60 && sum<65)
        cout<<"B"<<endl;
        else if(sum>=55 && sum<60)
            cout<<"B-"<<endl;
        else if (sum>=50 && sum<55)
            cout<<"C+"<<endl;
        else if (sum>=45 && sum<49)
            cout<<"C"<<endl;
        else if(sum>=40 && sum<45)
            cout<<"D"<<endl;
        else
        cout<<"F"<<endl;
        return 0;
}
