#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2,str3="",str4="",str5="";
        cin>>str1>>str2;
        str3+=str1+str2;
        int l=str3.length();
       bool found=false;
        for(int i=0;i<l;i++)
        {
            bool found=false;
            for(int j=i+1;j<l;j++)
            {
                if(str3[i]==str3[j])
                {
                    str4+=str3[i];
                    found=true;
                    break;
                }
            }
                if(!found)
                {
                str5+=str3[i];
            }
        }
        cout<<str5<<endl;
        
    }
}