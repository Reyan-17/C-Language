//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>
int main()
{
float l,b,perimeter,areaa;
printf("enter the length:");
scanf("%f",&l);
printf("enter the breadth:");
scanf("%f",&b);
perimeter=2*(l+b);
printf("perimeter=%fm\n",perimeter);
areaa=l*b;
printf("areaa=%fm^2\n",areaa);
return 0;
}