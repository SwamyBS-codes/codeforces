#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,count=0;
    cin>>n;
    string num=to_string(n);
    int l=num.length();
    bool found=true;
    for(int i=0;i<l;i++)
    {
        if(num[i]=='1' )
        {
            count+=1;
            
         if(num[i]=='1' && num[i+1]=='4')
        {
            count+=1;
            
        if(num[i]=='1' && num[i+1]=='4' && num[i+2]=='4')
        {
            count+=1;
           
       
        }
        }
        }
        }
    //cout<<count<<" "<<l<<endl;
    if(count==l)
    {                    
        cout<<"YES\n";
    }
    else if(count!=l)
    cout<<"NO\n";
    }
    return 0;
}