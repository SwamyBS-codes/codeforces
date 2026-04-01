#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,ans1,ans2=0;
        cin>>n>>k;
        ans1=k-1;
    
            ans2=(n*k)-ans1; 
     cout<<ans2<<endl;  }
    return 0;
}