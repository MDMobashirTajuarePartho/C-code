#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    cout<<"enter the first number : ";
    cin>>a;
    cout<<"enter the second number : ";
    cin>>b;
    cout<<"enter the operation ";
    cin>>op;

    switch(op)
    {
    case '+' :
        cout<<"result: " <<a+b<<endl;
        break;

    case '-' :
        cout<<"result: " <<a-b<<endl;
        break;

    case '*' :
        cout<<"result: " <<a*b<<endl;
        break;

    case '/' :
        if(b!=0)
      {
        cout<<"result: " <<a/b<<endl;
      }
        else
      {
            cout<<"error "<<endl;
      }
        break;

    default:
        cout<<"invalid operation"<<endl;
    }
}
