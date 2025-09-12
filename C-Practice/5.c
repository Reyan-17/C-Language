// wap to calculate the cube of a no.:
#include<stdio.h>
#include<math.h>
int main()
{
    double a,b=3.0,result;
    printf("enter any number:");
    scanf("%lf",&a);
    result=pow(a,b);
    printf("cube = %lf\n",result);
    return 0;
}