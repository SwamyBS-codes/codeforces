#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,q,plus=0,minus=0;
        cin>>n>>a>>q;
        char str[100];
        cin>>str;
        int l=strlen(str);
        for(int i=0;i<q;i++)
        {
            if(str[i]=='+')
            plus++;
            else 
            minus++;
        }
        //cout<<plus<<" "<<minus<<endl;
          if(plus==minus && str[l-1]=='+')
            cout<<"MAYBE\n";
       else if(str[l-1]=='+' )
        {
            cout<<"YES\n";
        }
         else if(str[l-1]=='-') 
        cout<<"NO\n";
       
       
        
    }
}