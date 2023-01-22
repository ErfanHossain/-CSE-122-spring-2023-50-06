/*
2. Write a C++ program to find first n Fibonacci number where n is the input from user.
*/

#include <iostream>
#include<conio.h>
using namespace std;

int fibonacci_numbers(int n)
{
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fibonacci_numbers(n-2)+fibonacci_numbers(n-1);
    }
}

int main() {
    int n;
    cin>>n;
      for(int i=0;i<n;i++)
    {
        cout<<fibonacci_numbers(i)<<" ";
    }
    return 0;
}
