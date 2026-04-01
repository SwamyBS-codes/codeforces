#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        double n,ans=0;
        cin>>n;
        while (n>0.01) { 
            ans+=n;
            n=n/10.0;
        }
        cout<<fixed<<setprecision(0);
        cout<<ceil(ans - 1)<<endl;
    }
    return 0;
}
