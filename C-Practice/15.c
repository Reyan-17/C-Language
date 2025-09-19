// wap using if , else-if , else statements.
#include<stdio.h>
int main()
{
    int x;
    printf("enter the percentile.\n ");
    scanf("%d",&x);
    if(x>30&&x<=50)
    {
        printf("eligible for college 1.\n");
    }
    else if(x>50&&x<=75)
    {
    printf("eligilble for college 2.\n");
    }
    else
    {
        printf("eligible for college 3.\n");
    }
    return 0;

}
