#include<iostream>
using namespace std;
int main()
{
    int n,row,col;
    cout<<"enter the n : ";
    cin>>n;
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            cout<<"  ";// use 2 space only
        }
        for(col=1;col<=row;col++)
        {
            cout<<" "<<col;//row/col%2/row%2/*/#/$/
        }
        cout<<endl;
    }
    for(row=n-1; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
        {
            cout<<"  ";// use 2 space only
        }
        for(col=1;col<=row;col++)
        {
            cout<<" "<<col;//row/col%2/row%2/*/#/$/
        }
        cout<<endl;
    }


}




