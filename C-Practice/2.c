//wap to take input from user and find the area of square.

#include<stdio.h>

int main()
{
    float side,area;
    printf("enter the length of side of square");
    scanf("%f",&side);
    area=side*side;
    printf("area is : %f\n",area);
    return 0;

}