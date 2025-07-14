#include<iostream>
using namespace std;
int main()
{

    int a,b,c;
    cout<<"Enter the first number : " ;
    cin>>a;
    cout<<"Enter the second number : " ;
    cin>>b;
    cout<<"Enter the third number : ";
    cin>>c;

    if(a<b)
    {
        if(b<c)
        {
            cout<<"third number is big";
        }
        else if(b>c)
        {
            cout<<"second number is big";
        }
    }
    else if (a>b)
    {

        if(a>c)
        {

            cout<<"first number is big";
        }
        else if(a<c)
        {

            cout<<"third number is big";
        }
    }

}
