# include<stdio.h>
int main()
{
    int num1,num2,num3,num4,num5,sum;
    printf("enter first num:");
    scanf("%d",&num1);
    printf("enter second num:");
    scanf("%d",&num2);
    printf("enter third num:");
    scanf("%d",&num3);
    printf("enter four num:");
    scanf("%d",&num4);
    printf("enter five num:");
    scanf("%d",&num5);
    sum= num1+num2*num3-num4+num5;
    printf("sum of the entered num:%d",sum);
    return 0;

}