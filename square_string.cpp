#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string res1="",res2="";
        string sq;
        cin>>sq;
        int l=sq.length();
        for(int i=0;i<l/2;i++)
        {

            res1+=sq[i];
        }
        int m=l;
        for(int j=l/2;j<m;j++)
        {
             res2+=sq[j];
        }
        if(res1==res2)
        cout<<"YES\n";
        else 
        cout<<"NO\n";
    }
}
