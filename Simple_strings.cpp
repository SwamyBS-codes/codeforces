#include<iostream>
using namespace std;
int main()
{
    string str1,str2="";
    cin>>str1;
    int l=str1.length();
    for(int i=0;i<l;i++)
    {
        if(str1[i]==str1[i+1])
        {
              str2+='a';
        }
        

        }
        cout<<str2<<endl;
    }
