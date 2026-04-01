#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string prob,prob1="ABCDEFG",prob2="";
        cin>>prob;
        sort(prob.begin(),prob.end());
        int l=prob1.length();
        int count=0;
        for(int i=0;i<n;i++)
        {
            bool found=false;
            for(int j=0;j<i;j++)
            {
               
                if(prob[i]==prob[j])
                {
                found=true;
                break;
                }
            }
            if(!found) 
                {
                prob2+=prob[i];
                }
            }
             int l1=prob2.length();
           // cout<<l<<" "<<l1;
            // cout<<prob2<<endl;
            
    cout<<(l-l1)*m<<endl;


        }
       
        
    }
