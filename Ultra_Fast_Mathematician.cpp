#include<iostream>
using namespace std;
int main()
{
    string s1,s2,s3="";
    cin>>s1>>s2;
    int l=s1.length();
    for(int i=0;i<l;i++)
    {
        if(s1[i]=='0' && s2[i]=='0' || s1[i]=='1' && s2[i]=='1')
        s3+='0';
        else if(s1[i]=='0' && s2[i]=='1' ||s1[i]=='1' && s2[i]=='0' )
        s3+='1';
    }
    cout<<s3<<endl;
}