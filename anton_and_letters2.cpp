#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str,str2="",s2="";
    getline(cin,str);
    int l=str.length();
    for(int i=0;i<l;i++)
    {
        if(str[i]!='{' && str[i]!='}' && str[i]!=',' && str[i]!=(char)32)
        str2+=str[i];
    }
    cout<<str2<<endl;
    int l2=str2.length();
    for(int i=0;i<l2;i++)
    {
        bool found=false;
        for(int j=0;j<i;j++)
        {
            if(str2[i]==str2[j]){
            found=true;
            break;
            }

        }
        if(!found)
        s2+=str2[i];
    }
    cout<<s2.length()<<endl;
}