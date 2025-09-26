 //Q11: Write a program to input an integer and check whether it is even or odd using if–else.

#include<stdio.h>
int main()
{
    int a;
    printf("enter any integer:");
    scanf("%d",&a);

    if(a%2==0){
        printf("its an even integer!\n");
    }
    else{
        printf("its an odd integer!\n");
    }
    return 0;
}