//wap to check if a student is passed or failed.
#include<stdio.h>
int main()
{
    int a;
    printf("enter the marks of student:");
    scanf("%d",&a);
    if(a>30){
        printf("PASSED!\n");
    }
    else{
        printf("FAILED..\n");
    }
    return 0;
}