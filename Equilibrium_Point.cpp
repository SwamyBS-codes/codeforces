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
    vector<int>suffixArray(arr.begin(),arr.end());
    for(int i=n-1;i>=0;i--)
    {
        suffixArray[i-1]+=suffixArray[i];
    }
     for(int i=1;i<n;i++)
     {
        arr[i]+=arr[i-1];
     }

     for(int i=0;i<n;i++)
     {
        if(arr[i]==suffixArray[i])
           {
            return i;
           }
     }
     return -1;



}