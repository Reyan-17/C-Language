//wap to give grades to a student.
#include<stdio.h>
int main()
{
    int a;
    printf("enter the marks:");
    scanf("%d",&a);
    
    if(a<=30){
        printf("C");
    }
    else if(a>30&&a<=50){
        printf("B");
    }
    else if (a>50&&a<=70){
            printf("A");
     }
     else
     {
        printf("A++");
     }
     return 0;
}