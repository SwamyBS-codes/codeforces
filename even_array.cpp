#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> A(n);
        
        for (int i=0;i<n;i++) 
        {
            cin>>A[i];
        }
        int even=0, odd=0;
        
        for(int i=0;i<n;i++) 
        {
            if(i%2==0) 
            { 
                if(A[i]%2!=0) 
                { 
                    odd++;
                }
            }
             else 
             { 
                if(A[i] % 2 == 0) 
                { 
                    even++;
                }
            }
        }
        if (even==odd) 
        {
            cout<<even<<endl;
        } 
        else 
        {
            cout<<-1<<endl;
        }
    }
    
    return 0;
}
