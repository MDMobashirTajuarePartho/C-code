#include<iostream>
using namespace std;
int main()
{
    int a,i,s=0;
    cout<<"enter the number: ";
    cin>>a;


    for (i=2; i<a; i++)
    {

        if (a%i==0)
        {
            s++;
        }
    }
    if (s==0)
    {
        cout<<"the number is prime"<<endl;
    }
    else
    {
        cout<<"the number is not prime"<<endl;
    }

}
