#include<stdio.h>
int main()
{
    char ch;
   printf("Enter any character: ");
   scanf("%c",&ch);
if((ch>='a'&& ch<='z') || (ch>'A'&& ch<='Z'))
{
    printf("CHARACTER IS ALPHABET");
}
else{
    printf("CHARATER IS NOT ALPHABET");
}
return 0;
}




