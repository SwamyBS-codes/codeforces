#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void countingSort(vector<int>& arr)
{
    if(arr.empty())
    return;
    int maxVal=*max_element(arr.begin(),arr.end());
    int minVal = *min_element(arr.begin(), arr.end());
    int range=maxVal-minVal+1;
    vector<int>count(range,0);
    for(auto c:arr)
    {
        count[c-minVal]++;
    }
    int index=0;
    for(int i=0;i<range;i++)
    {
        while(count[i]-->0)
        {
            arr[index++]=i+minVal;
        }

    }
}


int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    while(n--)
    {
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    countingSort(arr);
    for (int num : arr)
        cout << num << " ";
    cout << endl;
    return 0;
}