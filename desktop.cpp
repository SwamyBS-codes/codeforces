#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int  x,y;
        int  ans=0;
        cin>>x>>y;
        if(y>2)
        ans=ceil(y/2.0);
        else
         ans=ceil((x+4*y)/15.0);
         cout<<ans<<endl;
            
    }
    }
