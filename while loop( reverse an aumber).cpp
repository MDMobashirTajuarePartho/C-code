#include<iostream>
using namespace std;
int main()
{
      int num,tem,rem,sum=0;
      cout<<"enter the number: ";
      cin>>num;
      tem=num;
      while(tem!=0)
      {
            rem=tem%10;
            sum=sum*10+rem;
            tem=tem/10;
      }
      cout<<"sum: "<<sum;
}

