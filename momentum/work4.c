#include<stdio.h>
int main(){
    char day;
    printf("enter day no :");
    scanf("%c",&day);

    switch (day)
    {
    case 'm':
        printf("Monday");
        break;
    case 't':
        printf("Tuesday");
        break;
    case 'w':
        printf("wednesday");
        break;
    case 'T':
        printf("Thursday");
        break;
    case 'f':
        printf("Friday");
        break;
    case 's':
        printf("Saturday");
        break;
    case 'S':
        printf("sunday");
        break;                        
    
    default:
    printf("no day");
        break;
    }

    return 0;
}