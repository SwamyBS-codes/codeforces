
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string colour1,colour2;
        cin>>colour1;
        cin>>colour2;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(colour1[i]==colour2[i] || colour1[i]=='B' && colour2[i]=='G' ||colour1[i]=='G' && colour2[i]=='B')
            {
               count++;
               }
            
        }
        if(count>=n)
        cout<<"YES\n";
        else
        cout<<"NO\n";
       
    }
}