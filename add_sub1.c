#include<stdio.h>
int main()
{
    int num1,num2,num3,sum;
    printf("enter first num:");
    scanf("%d",&num1);
    printf("enter second num:");
    scanf("%d",&num2);
    printf("enter third num:");
    scanf("%d",&num3);
    sum=num1+num2-num3;
    printf("sum of the  entered num:%d",sum);
    
return 0;
}