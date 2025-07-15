#include<iostream>
using namespace std;
int main()
{
    int n,row,col,a;
    cout<<"enter the n : ";
    cin>>n;
    for(row=1; row<=n; row++)
    {

        for(col=1;col<=row;col++)
        {
            a=col*5;
            cout<<" "<<a;
        }
        cout<<endl;
    }


}



