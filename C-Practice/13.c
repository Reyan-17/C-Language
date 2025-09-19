// wap to check any no. is divisible by 2 or not.
#include<stdio.h>
int main()
{
    int x;
    printf("enter any number:");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("The number is divisible by two.\n");
    }
    else
    {
        printf("The number is not divisible by two.\n");
    }
    return 0;
}