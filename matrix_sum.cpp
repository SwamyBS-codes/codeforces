#include<iostream>
using namespace std;
int main()
{
    int r,c,sum=0,sum1=0;
    cout<<"Enter the no of rows and columns:\n";
    cin>>r>>c;
    int A[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)

        {
            cin>>A[i][j];
        }
    }
cout<<"Sum of the matrix elements is:\n";
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        cout<<A[i][j]<<" ";

    }
    cout<<"\n";
}
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
       if(i==j)
       {
        sum+=A[i][j];
       }
       

    }
   
}
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
       if(i+j==r-1)
       {
        sum1+=A[i][j];
       }
       

    }
   
}
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        if(i==j || i+j==r-1)
        {
            cout<<"*";
        }
        else 
        cout<<" ";
    }
    cout<<"\n";
}

cout<<sum<<endl<<sum1<<endl;
}