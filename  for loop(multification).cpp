#include<iostream>
using namespace std;
int main()
{
      int a,i,sum;
      cout<<"enter the number : ";
      cin>>a;
      for(i=1;i<=10;i++)
      {
            sum=i*a;
            cout<<i<<"*"<<a<<"="<<sum<<endl;
      }
}
