//use of switch case.
#include<stdio.h>
int main()
{
    int day;
    printf("enter the day(1-7)\n");
    scanf("%d",&day);
    switch(day){
        case 1:printf("Its monday\n");
            break;
        case 2:printf("Its tueseday\n");
            break;
        case 3:printf("Its wednesday\n");
            break;
        case 4:printf("Its thursday\n");
            break;
        case 5:printf("Its friday\n");
            break;
        case 6:printf("Its saturday\n");
            break;
        case 7:printf("Its sunday\n");
            break;
        default:printf("Not a valid day\n");

        }
        return 0;
}