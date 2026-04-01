#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,new1=-1;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        if(A[0]!=A[1] && A[1]==A[2])
        new1=1;
        else{
      for(i=1;i<n;i++)
      {
        //bool found=false;
        if(A[i]!=A[0])
        {
            new1=i+1;
            break;
        }
      
      }
        }
      cout<<new1<<endl;
      cout<<"\n";
    }
}