#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int l,r,s=0,count=0;
        cin>>l>>r;
           while(l%r!=0)
           {
            r++;
           }
     for(int i=0;r!=0;i++)
     {
        r=r/l;
        count++;
     }
     cout<<count<<endl;
    }
}