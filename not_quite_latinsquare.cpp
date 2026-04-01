#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char A[3][3];
        int a=0,b=0,c=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>A[i][j];
            }
        }
        // for(int i=0;i<3;i++)
        // {
        //     for(int j=i+1;j<3;j++)
        //     {
        //            if(A[i][j]=='?')
        //            {
        //              if(A[i][j]=='A')
        //              a=1;
        //              else if(A[i][j]=='B')
        //              b=1;
        //              else if(A[i][j]=='C')
        //              c=1;
                     
        //            }
                      
        //      } }
        for(int i=0;i<3;i++)
        {
            if(A[0][i]=='A')
            a+=1;
            else if(A[0][i]=='B')
            b+=1;
            else if(A[0][i]=='C')
            c+=1;

            if(A[1][i]=='A')
            a+=1;
            else if(A[1][i]=='B')
            b+=1;
            else if(A[1][i]=='C')
            c+=1;

            if(A[2][i]=='A')
            a+=1;
            else if(A[2][i]=='B')
            b+=1;
            else if(A[2][i]=='C')
            c+=1;

        }
        //cout<<a<<" "<<b<<" "<<c<<endl;
        if(a==3 && b==3)
        cout<<"C"<<endl;
        else if(a==3 && c==3)
        cout<<"B"<<endl;
        else if(b==3 && c==3)
        cout<<"A"<<endl;
        
    }
}
