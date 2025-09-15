#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter any three number:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>c&&a>b)
    {
        printf("a is greatest");
    }
    else if (b>a&&b>c)
    {
        printf("b is greatest");
    }
    else
    {
        printf("c is greatest");
    }
    return 0;

}