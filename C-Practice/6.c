// wap to convert degree into celcius
#include<stdio.h>
int main()
{
    float celsius,fahrenheit;
    printf("enter the temprature in celcius:");
    scanf("%f",&celsius);
    fahrenheit=32+(celsius*9/5);
    printf("temprature =%f\n",fahrenheit);
    return 0;
}