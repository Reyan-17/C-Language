//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main()
{
float a,b,sum,product,difference,quiotent;
printf("enter the first no.\n");
scanf("%f",&a);
printf("enter the second no.\n");
scanf("%f",&b);
sum=a+b;
printf("sum=%f\n",sum);
product=a*b;
printf("product=%f\n",product);
quiotent=a/b;
printf("quiotent=%f\n",quiotent);
difference=a-b;
printf("difference=%f\n",difference);
return 0;
}
