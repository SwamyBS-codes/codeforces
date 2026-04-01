#include<iostream>
using namespace std;
int main()
{
    int n,x,repeat;
    cin>>n;
    x=n/100;
    n=n/100;
    int A[n];
    A[0]=n%10;
    n/=10;
    A[1]=n%10;
    A[2]=x%10;
    x/=10;
    A[3]=x%10;
    cout<<A[0];
    cout<<A[1];
    cout<<A[2];
    cout<<A[3];
   if(A[0]==A[1] || A[0]==A[2] || A[0]==A[3])
   repeat=A[0];
   cout<<repeat<<endl;
}
    