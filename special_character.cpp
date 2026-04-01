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
        string str1,str2;
        for(int i=0;i<n/2;i++)
        {
            str1+=(char)65+i;
        }
        for(int i=0;i<n/2;i++)
        {
            str1+=(char)65+i;
        }
        sort(str1.begin(),str1.end());
        
        if(n%2!=0)
        {
            cout<<"NO\n";
        }
        else 
        cout<<"YES\n"<<str1<<endl;
    }}
