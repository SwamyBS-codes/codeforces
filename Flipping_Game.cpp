#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    int total_ones=0;

    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];
        if(arr[i]==1) 
        total_ones++;
    }

    int max_diff=-1e9,curr_diff=0;
    for(int i=0;i<n;i++) 
    {
        int val=(arr[i]==0)?1:-1;
        curr_diff=max(val, curr_diff+val);
        max_diff = max(max_diff, curr_diff);
        // cout<<curr_diff<<" "<<max_diff<<endl;
    }
    if (total_ones == n)
        cout<<n-1<<endl;
    else
        cout<<total_ones+max_diff<<endl;

    return 0;
}
