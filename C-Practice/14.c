// wap to check weather the number is of two digit or not.
#include<stdio.h>
int main()
{
    int x;
    printf("enter any number:");
    scanf("%d",&x);
    printf("%d",x>9&&x<100);
    return 0;
}