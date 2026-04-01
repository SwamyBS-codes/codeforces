#include<iostream>
using namespace std;
int main()
{
    char n,m;
    cin>>n>>m;
    char A[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>A[i][j];
        }
    }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<A[i][j]<<" ";
            }
              cout<<endl;
        }
      
}
        
