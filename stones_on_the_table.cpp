#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int count=0;
    int length=str.length();
    
    for (int i=0;i<length;i++)
    {
        if(str[i]==str[i-0])
        {
            count++;
        }
        

    }
    cout<<count;
}
       