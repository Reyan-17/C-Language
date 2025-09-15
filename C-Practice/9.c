// wap to find area of triangle if length of 3 sides are given.
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,area;
    printf("Enter the length of first side:\n");
    scanf("%f",&a);
    printf("Enter the length of second side:\n");
    scanf("%f",&b);
    printf("Enter the length of third side:\n");
    scanf("%f",&c);
    s=a+b+c/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of tringle = %f/n",area);
    return 0;
}