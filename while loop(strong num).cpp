#include<iostream>
using namespace std;
int main()
{
      int num,tem,rem,i,sum=0;
      cout<<"enter the number :";
      cin>>num;
      tem=num;
      while(tem!=0)
      {
            rem=tem%10;
            int fact=1;
            for(i=1;i<=rem;i++)
            {
                  fact=fact*i;
            }
            sum=sum+fact;
            tem=tem/10;

      }
      if(sum==num)
      {
            cout<<"it is a strong number"<<endl;
      }
      else
      {cout<<"it is not a strong number"<<endl;}
}
