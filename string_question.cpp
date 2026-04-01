#include<iostream>
using namespace std;
void fun(char *a)
{
    if(*a && *a!=' ')
    {
        fun(a+1);
        putchar(*a);
    }
}
int main()
{
    char a[15]="ABCD EFGH";
    fun(a);
}