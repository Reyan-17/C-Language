//Q6: Write a program to swap two numbers using a third variable.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the first no.:");
    scanf("%d",&a);
    printf("enter the second no.:");
    scanf("%d",&b);
    c=a;a=b;b=c;
    printf("Ater Swap:a=%d b=%d",a,b);
    return 0;
}
