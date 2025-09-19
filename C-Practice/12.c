// wap to check the type of triangle.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the length of 3 sides of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c&&c==a)
    {
        printf("Its an equilateral triangle\n");
    }
    else if(a==b||b==c||c==a)
    {
        printf("Its an isosceles \n");
    }
    else
    {
        printf("Its a scalene triangle\n");
    }
    return 0;
}