#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    string s,s1="",s2;
    cin>>s;
    int l=s.length();
    
    for(int i=0;i<l;i++)
    {
        if(i==0)
        s1+=toupper(s[0]);
        else 
        s1+=tolower(s[i]);
    }
    cout<<s1<<endl;
}