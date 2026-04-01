#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2,s3;
        cin>>s1;
        int l=s1.length();
        for(int i=0;i<l;i++)
        {
            s2+=s1[l-i-1];
        }
         s3=s1;
         sort(s3.begin(),s3.end());
        if(s1!=s2)
        cout<<"YES\n"<<s2<<endl;
        else if(s1!=s3)
        cout<<"YES\n"<<s3<<endl;
        else 
        cout<<"NO\n";
       
}
}

       
        
       
