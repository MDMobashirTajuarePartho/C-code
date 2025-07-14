#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the number : ";
    cin>>a;
    if(a<0)
    {
        cout<<"enter the positive number";
    }

    for(int i=1;i<=10;i++)
    {
        b=i*a;
        cout<<""<<a<<" * "<<i<<" = "<<b<<endl;
    }
}

