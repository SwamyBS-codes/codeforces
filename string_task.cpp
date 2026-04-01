#include<iostream>
using namespace std;

int main() {
    string input;
    cin>>input;

    string result ;

    for (char ch:input) {
        ch=tolower(ch); 
  if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch == 'y')
  {
            continue;
  }
        result+='.';
        result+=ch;
    }  

    cout<<result<<endl;

    return 0;
}
