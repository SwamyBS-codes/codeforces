#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int l=s.length();
        for(int i=0;i<l;)
        {
            int j=0;
            if(s[j]==s[i++])
            {
                cout<<s[0];
                j=i+1;
            }
            
            
            

        }
    }
}