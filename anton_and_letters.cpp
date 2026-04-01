#include<iostream>
#include<cctype>
#include  <bits/stdc++.h>
using namespace std;
int main()
{
string s,s2="",s3="";
    getline(cin,s);
    int l=s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i]!=(char)123 && s[i]!=(char)125 &&s[i]!=(char)44&& s[i]!=(char)32)
        s2+=s[i];
    }
    int l2=s2.length();
    
    for(int i=0;i<l2;i++)
    {
        bool found=false;
        for(int j=0;j<i;j++)
        {
            if(s2[i]==s2[j])
            {
                found=true;
               break;
            }
        }
             if(!found)
           {
            s3+=s2[i];
            
           }

        }
        cout<<s3.length()<<endl;
    }
    
