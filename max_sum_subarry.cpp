#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>arr(n),ans;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<k;i++)
    {
       sum+=arr[i];
    }
    int i=0;
    int curr=sum;
    int startIndex=0;
    for(int j=k;j<n;j++)
    {
       sum+=arr[j];
       sum-=arr[i];
       i++;
       if(sum>curr)
       {
       curr=sum;
       startIndex=i;
       }
    }
    for(int i=startIndex;i<startIndex+k;i++)
    {
        cout<<arr[i]<<" ";
    }

}