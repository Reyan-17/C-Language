//wap to find if a character enteres by user is uppercase or not.
#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);
    if(ch>='A' && ch<'Z'){
        printf("UPPERCASE");
    }
    else{
        printf("lowercase");
    }
    return 0;
}