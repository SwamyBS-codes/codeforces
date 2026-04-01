#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n,i=0;
    char str[50]="",str2[50]="";
    scanf("%d",&n);
    int result=0,rem=0;
    char rem1=0;;
    while(n!=0)
    {
        rem=n%2;    
    str[i++]=rem+'0';
        n=n/2;
       
    }
    str[i]='\0';

    int l=strlen(str);
  for(int i=0;i<l/2;i++)
  {
    char temp=str[i];
    str[i]=str[l-i-1];
    str[l-i-1]=temp;
  }
  
  printf(" decimal to binary is %s",str);
  int j=0;
  for(int i=0;i<l;i++)
  {
    if(str[i]=='1')
    {
      result+=pow(2,l-i-1);
    }
  }


  printf("\n binary to decimal is %d ",result);
  
}