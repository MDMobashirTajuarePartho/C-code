#include<iostream>
using namespace std;

void maximum1( int arr[3])
{
      int max=arr[0];
      for(int i=1;i<3;i++)
      {
            if(arr[i]<max)
            {
                  max=arr[i];
            }
            else{max=arr[0];}
      }
      cout<<max<<endl;
      if(max%2==0)
            {
                  cout<<max<<" is a even number"<<endl;
            }
            else{cout<<max<<" is a odd number"<<endl;}

}
void minimum1(int arr[3])
{
      int min=arr[0];
      for(int i=1;i<3;i++)
      {
            if(arr[i]>min)
            {
                  min=arr[i];
            }
            else{min=arr[0];}
      }
      cout<<min<<endl;
      if(min%2==0)
            {
                  cout<<min<<" is a even number"<<endl;
            }
            else{cout<<min<<" is a odd number"<<endl;}
}

int main()
{
      int arr[3];
      for(int i=0;i<3;i++)
      {
            cout<<"enter the number"<<i+1<<endl;
            cin>>arr[i];
      }
      maximum1(arr);
      minimum1(arr);
}
