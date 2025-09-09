// Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main()
{
float r,circumference,area;
printf("enter the radius:");
scanf("%f",&r);
circumference=2*3.14*r;
printf("circumference=%fm\n",circumference);
area=3.14*(r*r);
printf("area=%fm^2\n",area);
return 0;
}
