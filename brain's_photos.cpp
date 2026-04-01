#include<iostream>
using namespace std;
int main()
{
    int n,m,count=0,count1=0;
    cin>>n>>m;
    char photo[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>photo[i][j];
        }
    }
    bool found=false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(photo[i][j]=='C' || photo[i][j]=='M' || photo[i][j]=='Y' )
            {
            found=true;
            count++;
            }

        }
       
    }
    if(count>=1)
    cout<<"#Color\n";
    else 
    cout<<"#Black&White\n";
}