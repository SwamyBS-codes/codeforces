#include<iostream>
using namespace std;
int main()
{
    int t;
    string s="codeforces";
     int l=s.length();
    cin>>t;
    while(t--)
    {
        int count=0;
        string s1;
        cin>>s1;
       
       
        for(int i=0;i<l;i++)
        {
         bool found=false;
        
            if(s1[i]==s[i])
            {
            found=true;
            }
           else if(!found)
            {
             count++;
              }
       
    }
    cout<<count<<endl;
} 

}