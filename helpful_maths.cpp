#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    
    cin.getline(str,100);
    int l=strlen(str);
    for(int i=0; i<l-1;i+=2) {
for(int j=i+2;j<l;j+=2) {
    if(str[j]<='3') { 
    if(str[i]>str[j]) {
         char temp=str[j];
            str[j]=str[i];
        str[i]=temp;
                }
            }
        }
    }
    cout<<str<<endl;
    return 0;
}
