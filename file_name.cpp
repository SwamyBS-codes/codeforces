#include<iostream>
using namespace std;
int main()
{
    int n,count=0;;
    cin>>n;
    string file,file1;
    cin>>file;
    file1+=file[0];
    file1+=file[1];
    file1+=file[2];
    for(int i=0;i<n;i++)
    {
        if(file1=="xxx")
        count=1;`
        else 
        count=0;
        
   }
   if(count=1)
   cout<<file1.length()-2<<endl;
   else 
   cout<<0<<endl;
//cout<<file1<<endl;
}