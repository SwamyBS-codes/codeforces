#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans;
        cin>>n;
       
        
          if(n%4==0)
          {
            ans=n/4;
          }
          else 
          ans=n/4+1;
          cout<<ans<<endl;
    }
}