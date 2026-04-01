#include <iostream>
#include<cmath>
using namespace std;

int main() {
    long long int n,m;
    cin>>n>>m;

   
    long long int odd=ceil((n+1)/2);
    long long int even=n/2;

    if(m<=odd) {
       
        cout<<(2*m-1)<<endl;
    } else {
       
        cout<<(2*even)<<endl;
    }
    cout<<odd<<" "<<even<<endl;

    return 0;
}
