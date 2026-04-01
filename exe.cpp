#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string s;
    cin>>s;
    int l,c=0;
   l=s.length();
  
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(s[i]=s[j])
            c++;
            
        }
    }
    if(c%2==0)
    cout<<"CHAT WITH HER!";
    else
    cout<<"IGNORE HIM!";
    return 0;
}