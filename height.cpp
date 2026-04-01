#include<iostream>
#include<cmath> 
using namespace std;

int main() {
    int base,area;
    cin>>base>>area;
    double height=ceil((2.0 * area) / base);
    int height1= (int)height; 
    cout<<height1<<endl;

    return 0;
}
