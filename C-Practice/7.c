// wap to find simple intrest:
#include<stdio.h>
int main()
{
 float p,r,t,interest;
 printf("enter the principle time and rate\n:");
 scanf("%f %f %f",&p,&t,&r);
 interest=(p*r*t)/100;
 printf("simple interest = %f\n",interest);
 return 0;
}