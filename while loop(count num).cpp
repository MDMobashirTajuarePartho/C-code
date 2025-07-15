#include<iostream>
using namespace std;
int main()
{
      int num,sum,count=0;
      cout<<"enter the number: ";
      cin>>num;
      while(num!=0)
      {
            num=num/10;
            count++;
      }
      cout<<"total number is: "<<count<<endl;
}
