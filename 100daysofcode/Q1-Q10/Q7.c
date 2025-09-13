//Q7: Write a program to swap two numbers without using a third variable.
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the first no.:");
    scanf("%d",&a);
    printf("enter the second no.:");
    scanf("%d",&b);
    a=a+b;b=a-b;a=a-b;
    printf("after swap; a=%d b=%d",a,b);
    return 0;
}

