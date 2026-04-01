#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    scanf("%s%s",str1,str2);
    int l=strlen(str2);
    for(int i=0;i!='\0';i++)
    {
        str1[l+1]=str2[i];
    }
    int l2=strlen(str1);
    str1[l2]='\0';
    printf("%s ",str1);
    return 0;
}