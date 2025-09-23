// wap to take input from user and print date of birth.

#include<stdio.h>
int main(){
    int date,year;
    char month[30];
    printf("enter the date month and year:");
    scanf("%d%s%d",&date,month,&year);
    printf("DOB: %d %s %d\n",date,  month,  year);
    return 0;
}