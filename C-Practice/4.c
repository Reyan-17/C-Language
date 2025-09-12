// wap to find area and perimeter of rectangle:.

#include<stdio.h>
int main()
{
    int l,b;
    printf("enter the length of rectangle:");
    scanf("%d",&l);
    printf("enter the breadth of rectangle:");
    scanf("%d",&b);
    printf("perimeter= %d\narea= %d\n",2*(l+b),(l*b));
    return 0;
}