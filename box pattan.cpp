#include<iostream>
using namespace std;
int main()
{
    int n,row,col;
    cout<<"enter the n : ";
    cin>>n;
    for(row=1; row<=n; row++)
    {
        for(col=1;col<=n;col++)
        {
            cout<<" "<<col;//row/col%2/row%2/*/#/$/col*row
        }
        cout<<endl;
    }
}




