#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int p,q,k=0;
   cin>>p;
   int A[p];
   for(int i=0;i<p;i++)
   {
    cin>>A[i];
   }
cin>>q;
int B[q];
for(int i=0;i<q;i++)
   {
    cin>>B[i];
   }
   for(int i=0;i<q;i++)
   {
    A[p+i]=B[i];
   }
   
   int c[p+q];
   for(int i=0;i<(p+q);i++)
   {
    bool found=false;
    for(int j=0;j<i;j++)
    {
        if(A[i]==A[j])
        {
            found=true;
            break;
        }

    }
    if(!found)
    {
        c[k++]=A[i];
    }
   }
   sort(c,c+k);
//    for(int i=0;i<k;i++)
//    {
//     cout<<c[i]<<" ";
//    }
   int x[n];
   for(int i=0;i<=n;i++)
   {
    
    x[i]=i;
   }
   int y[n],j=0;
    for(int i=0;i<=n;i++)
   {
    if(i!=0)
    {
        y[j++]=x[i];

    }
   }
   for(int i=0;i<j;i++)
   {
    cout<<y[i]<<" ";
   }
   int d=0;
   for(int i=0;i<n;i++)
   {
    if(c[i]==y[i])
    d+=1;
   }
   if(d==n)
   cout<<"I become the guy."<<endl;
   else 
   cout<<"Oh, my keyboard!"<<endl;




}