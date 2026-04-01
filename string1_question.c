#include<stdio.h>
#include<string.h>
int main()
{
    char P[20];
    char *s="strings";
    int l=strlen(s);
    for(int i=0;i<l;i++)
    {
        P[i]=s[l-4];
    }
    printf("%s",P);
    //no output is printed because first null character is printed
}