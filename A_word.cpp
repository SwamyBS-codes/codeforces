#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string name;
    getline(cin, name); 
    int uppercase=0,lowercase=0;
    int length=name.length();
    for(char c:name)
    {
        if(islower(c))
        lowercase++;
        else if(isupper(c))
        uppercase++;
    }
    for(int i=0;i<length;i++)
    {
    if(lowercase>uppercase ||lowercase==uppercase)
    {
    name[i]=tolower(name[i]);
    }
     if(lowercase<uppercase)
    {
    name[i]=toupper(name[i]);
    }
    }
    cout<<name;

}