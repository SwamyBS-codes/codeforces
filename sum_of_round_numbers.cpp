#include <iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
      vector<int>vec;
        int n;
        cin>>n;
        
        int k=1;
        int count=0;
        while(n>0) 
        {
            int rem=(n%10)*k;
            
            if(rem!=0) 
            {
                vec.push_back(rem);
                count++;
            }
            
            n/=10;
            k*=10;
        }
        cout<<count<<endl;
        for(auto c:vec)
        {
            cout<<c<<" ";
        }
        
        cout<<endl;
    }
    
    return 0;
}
