//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main()
{
float a,b,sum,product,difference,quiotent;
printf("enter the first no.");
scanf("%f",&a);
printf("enter the second no.");
scanf("%f",&b);
sum=a+b;
printf("sum=%f",sum);
product=a*b;
printf("product=%f",product);
quiotent=a/b;
printf("quiotent=%f",quiotent);
difference=a-b;
printf("difference=%f",difference);
return 0;
}