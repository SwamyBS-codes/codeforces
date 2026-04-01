#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
    map<int,int>mp;
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }
    vector<vector<int>>result;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++)
    {
        int start=arr[i];
        if(mp[start]==0)
        continue;
        vector<int>group;
        for(int j=0;j<k;j++)
        {
            int curr=start+j;
            if(mp[curr]==0)
            return 0;
            group.push_back(curr);
            mp[curr]--;
            
        }
        result.push_back(group);
    }
    
    for(auto c:result)
    {
        
        for(int i=0;i<c.size();i++)
        {
           cout<<c[i]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
