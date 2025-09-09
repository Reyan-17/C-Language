//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>
int main()
{
float l,b,perimeter,area;
printf("enter the length:");
scanf("%f",&l);
printf("enter the breadth:");
scanf("%f",&b);
perimeter=2*(l+b);
printf("perimeter=%fm\n",perimeter);
area=l*b;
printf("area=%fm^2\n",area);
return 0;
}