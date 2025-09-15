//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
int main()
{
    float sec,hrs;
    int s,min;
    printf("enter the time in seconds:");
    scanf("%d",&s);
    sec= s%60;
    min=(s%3600)/60;
    hrs=(s/3600);
    printf("time = %fhrs\t%dmin\t%fsec\n",hrs ,min ,sec);
    return 0;
}