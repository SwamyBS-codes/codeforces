#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n;i++)
    {
        arr[i]+=arr[i-1];
    }
    int k=2;
    vector<int>ans;
    while(k--)
    {
        int i,j;
        cin>>i>>j;
         ans.push_back(arr[j]-arr[i-1]);
    }
    for(auto c:ans)
    cout<<c<<" ";
    
}