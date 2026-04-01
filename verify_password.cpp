#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string pass,pass1;
        cin>>pass;
        bool found=false;
        for(int i=0;i<2;i++)
        {
            
            if(pass[i]>='a' || pass[i]<='z')
            found=true;
        }
        pass1=pass;
        sort(pass1.begin(),pass1.end());
        if(pass==pass1)
        cout<<"YES\n";
        else if(found || pass!=pass1)
        cout<<"NO\n";
        
}
}