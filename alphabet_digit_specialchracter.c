#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any charcter :");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
     {
         printf("'%c' is Alphabet.",ch);
     }
     else if(ch >= '0' && ch <= '9') 
     {
     printf(" '%c is Digit.",ch);       
     }
     else
     {
         printf("'%C' is Specialchracter.",ch);
     }
         return 0;
     }
