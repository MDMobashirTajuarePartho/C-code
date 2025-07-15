#include<iostream>
using namespace std;
int main()
{
      int n,row,col;
      cout<<"enter the n : ";
      cin>>n;
      for(row=n;row>=1;row--)
      {
            for(col=1;col<=row;col++)
            {
                  cout<<" "<<col;//row/col%2/row%2/*/#/$/
            }
             cout<<endl;
      }


}

