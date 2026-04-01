#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t; 
    
    while (t--) {
        int n;
        cin>>n;
        
        if(n < 3) 
        {
            cout<<0<<endl;
        } 
        else if(n%2==0) 
        {b
           
            int ways = (n / 2)-1;
            cout<<ways<<endl;
        }
        else 
        {
            int ways = n / 2;
            cout<<ways<<endl;
        }

    }
    
    return 0;
}
