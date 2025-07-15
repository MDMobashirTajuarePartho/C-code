#include<iostream>
using namespace std;
int main()
{
      int num1,num2,a,b,rem,d;
      cout<<"enter the number: ";
      cin>>num1;
      cout<<"enter the number: ";
      cin>>num2;
      a=num1;
      b=num2;
      while(b!=0)
      {
            rem=a%b;
            a=b;
            b=rem;
      }
      cout<<"gcd: "<<a<<endl;
      d=(num1*num2)/a;
      cout<<"lcm: "<<d<<endl;
}
