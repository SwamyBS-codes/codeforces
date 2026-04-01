#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int A[n];
    for(int i =0;i<n;i++) {
        cin >> A[i];
    }
    
    bool found=false; 
    for(int i =0;i<n;i++) {
        if(A[i] ==1) {
            found = true;
            break; 
        }
    }
    
    if(found) {
        cout<<"HARD";
    } else {
        cout << "EASY";
    }
    
    return 0;
}
