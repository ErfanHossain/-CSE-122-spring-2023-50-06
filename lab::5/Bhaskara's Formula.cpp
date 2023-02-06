#include <iostream>
#include<math.h>
#include<iomanip>
using namespace std;

 main() {
    double a,b,c,R1,R2,sum1,sum2,sum3,sqrt1;
    cin>>a>>b>>c;
    sum1=(4*a*c);
    sum2=(b*b);
    sum3=(sum2-sum1);
    sqrt1=sqrt(sum3);
    cout<<fixed<<setprecision(5);
    R1=((-b+sqrt1)/(2*a));
    R2=((-b-sqrt1)/(2*a));
    if(a==0||b==0||c==0)
        cout<<"Impossivel calcular"<<endl;
    else if (sum1>sum2)
    cout<<"Impossivel calcular"<<endl;

    else
    {
        cout<<"R1 = "<<R1<<endl;
        cout<<"R2 = "<<R2<<endl;
    }


    return 0;
}
