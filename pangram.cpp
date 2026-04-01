#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,i;
    cin>>n;
    string pangram;
    cin>>pangram;
    for(i=0;i<n-1;i++)
    {
        if(pangram[i]==pangram[i+1])
        count++;
        
    }
    cout<<count<<endl;
}
    