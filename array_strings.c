#include<stdio.h>
#include<string.h>

int main() {
    char *fruits[] = {"2 orange", "3 apple", "4 bananas", "3.pineapples"};

    
   if(strcmp(fruits[1],fruits[2])<0)
   printf("%s is lesser than %s ",fruits[1],fruits[2]);
   else if(strcmp(fruits[1],fruits[2])>0)
   printf("%s is greater than %s ",fruits[1],fruits[2]);
    return 0;
}
