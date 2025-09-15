#include<stdio.h>
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("its an even number\n");
    }
    else
    {
        printf("its a odd number\n");
    }
    return 0;
}