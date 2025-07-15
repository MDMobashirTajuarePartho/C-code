#include<iostream>
using namespace std;
int main()
{
    int a,i;
    for(i=0;i<3;i++)
    {
          cout<<"enter the number : ";
          cin>>a;
          if(a%2==0)
          {
                cout<<"the number is even"<<endl;
          }
          else{cout<<"the number is odd"<<endl;}
    }
}

